#include "browser.h"
//#include "connect.h"
#include "ui_browser.h"


Browser::Browser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Browser)
{
    ui->setupUi(this);
    trIcon = new QSystemTrayIcon();
    trIcon->setIcon(QIcon(":/img/logo2.bmp"));
    trIcon->show();

    connect(trIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(showHide(QSystemTrayIcon::ActivationReason)));

    this->showMaximized();
    this->on_lineEdit_returnPressed();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("sites.s3db");
    db.open();
    QSqlTableModel *model;
    model= new QSqlTableModel (this);
    model->setTable("sites");
    model->select();
    //ui->tableView->setModel(model);

}

Browser::~Browser()
{
    delete ui;
}

void Browser::on_lineEdit_returnPressed()
{
    QString url_str = this->ui->lineEdit->text();
    if (!url_str.startsWith("http://")){
    url_str = "http://"+url_str;
    }
    QUrl url(url_str);
    this->ui->webView->load(url);

}


void Browser::showHide(QSystemTrayIcon::ActivationReason r) {
    if (r==QSystemTrayIcon::Trigger)
    if (!this->isVisible()) {
       this->show();
    } else {
       this->hide();
    }
}
