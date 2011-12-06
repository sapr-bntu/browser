#include "browser.h"
//#include "connect.h"
#include "ui_browser.h"


Browser::Browser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Browser)
{
    ui->setupUi(this);
    trIcon = new QSystemTrayIcon();
    trIcon->setIcon(QIcon(":/img/img/logo2.bmp"));
    trIcon->show();

    connect(trIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(showHide(QSystemTrayIcon::ActivationReason)));

    this->showMaximized();
    this->on_lineEdit_returnPressed();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("browser.s3db");
    db.open();
    //qDebug()<<"Error in opening database"<<db.lastError().text();
    connect(ui->webView,SIGNAL(urlChanged(QUrl)),this,SLOT(linkchange(QUrl)));
    //модель для автодополнения
    modelComplection = new QSqlQueryModel(this);
    modelComplection->setQuery("SELECT name FROM sites");
    ui->tableView->setModel(modelComplection);

   //автодополнение
    QCompleter *completer = new QCompleter(modelComplection,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit->setCompleter(completer);

}

Browser::~Browser()
{
    delete ui;
}

void Browser::on_lineEdit_returnPressed()
{
    url_str = this->ui->lineEdit->text();
    if (!url_str.startsWith("http://")){
    url_str = "http://" + url_str;
    }
    QUrl url(url_str);
    this->ui->webView->load(url);
}

void Browser::showHide(QSystemTrayIcon::ActivationReason r) {
    if (r==QSystemTrayIcon::Trigger)
    {
    if (!this->isVisible())
        {
       this->show();
    } else {
       this->hide();
    }
}
}


void Browser::on_pushButton_clicked()
{
//    ui->lineEdit->setText(url_str);
}
void Browser::linkchange(const QUrl &url)
{
    ui->lineEdit->setText(url.toString());
    QSqlQuery query;
    query.exec("SELECT * FROM sites WHERE name LIKE '%"+url.toString()+"%'");
    if (!query.next())
    {
        query.exec("INSERT INTO sites(name) VALUES ('"+url.toString()+"')");
    }

}

void Browser::on_lineEdit_textChanged(QString lineEditText)
{
    ui->comboBox->clear();
    lineEditText=ui->lineEdit->text();
    QSqlQuery query;
    query.exec("SELECT * FROM sites WHERE name LIKE '%"+lineEditText+"%'");
    while (query.next())
    {
        //ui->comboBox->addItem(str(query.value(1)));
        ui->comboBox->addItem((query.value(1).toString()));
        //lineEditText=ui->comboBox->currentText();
        //ui->lineEdit->setText(lineEditText);
    }
    //query.exec("INSERT INTO sites")
}



void Browser::on_comboBox_activated(QString fff)
{
    ui->lineEdit->setText(fff);
}
