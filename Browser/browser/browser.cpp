#include "browser.h"
//#include "connect.h"
#include "ui_browser.h"

#include "qfiledialog.h"
#include "qmessagebox.h"


#include <QString>
#include <QAction>
//#include <QAxFactory>
#include <QMenuBar>
#include <QMessageBox>
#include <QTextEdit>
#include <QPixmap>
#include <QDebug>

Browser::Browser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Browser)
{
    ui->setupUi(this);
    trIcon = new QSystemTrayIcon();
    trIcon->setIcon(QIcon(":/img/img/logo2.bmp"));
    trIcon->setContextMenu(ui->menuMenu);
    trIcon->show();

    connect(trIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(showHide(QSystemTrayIcon::ActivationReason)));


  /*  QMenu *help = new QMenu(this);

    action = new QAction("&About...", this);
    action->setShortcut(tr("F1"));
    connect(action, SIGNAL(triggered()), this, SLOT(helpAbout()));
    help->addAction(action);

    action = new QAction("&About Qt...", this);
    connect(action, SIGNAL(triggered()), this, SLOT(helpAboutQt()));
    help->addAction(action);


    menuBar()->addMenu(help)->setText("&Help");

    */



    this->showMaximized();
    this->on_lineEdit_returnPressed();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("browser.s3db");
    db.open();
    //qDebug()<<"Error in opening database"<<db.lastError().text();
    connect(ui->webView,SIGNAL(urlChanged(QUrl)),this,SLOT(linkchange(QUrl)));

    //модель для автодополнения
    modelComplection=new QSqlQueryModel(this);
    modelComplection->setQuery("SELECT name FROM sites");
//    ui->tableView->setModel(modelComplection);


    //автодополнение
    QCompleter *completer=new QCompleter(modelComplection,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit->setCompleter(completer);
    ////////////////////////////
    connect(ui->actionBack,SIGNAL(triggered()),ui->pushButton,SIGNAL(clicked()));
    connect(ui->actionForward,SIGNAL(triggered()),ui->pushButton_2,SIGNAL(clicked()));
    connect(ui->actionReload,SIGNAL(triggered()),ui->pushButton_4,SIGNAL(clicked()));
    connect(ui->actionStop,SIGNAL(triggered()),ui->pushButton_3,SIGNAL(clicked()));
    connect(ui->actionClose,SIGNAL(triggered()), this, SLOT(exitBrowser()));
    connect(ui->actionOpen_2,SIGNAL(triggered()), this, SLOT(Open()));
    connect(ui->actionTray,SIGNAL(triggered()), this, SLOT(save()));
   // connect(ui->actionOpen,SIGNAL(triggered()))
}

Browser::~Browser()
{
    trIcon->hide();
//    delete trIcon;
    delete ui;
}







bool Browser::UrlWithoutDomen(QString str)
{
    int index=str.lastIndexOf(".",index);
    bool flag=false;
    if (index==-1 || index==(str.length()-1))
    {
        flag=true;
    }
    return flag;
}

bool Browser::UrlWithDomen(QString str)
{
    int index=str.lastIndexOf(".",index);
    bool flag=false;
    if (index!=-1 || index!=(str.length()-1))
    {
        flag=true;
    }
    return flag;
}

bool Browser::UrlWithoutHTTP(QString str)
{
    int index=str.lastIndexOf("http://",index);
    bool flag=false;
    if (index!=-1 || index!=0)
    {
        flag=true;
    }
    return flag;
}

bool Browser::UrlWithHTTP(QString str)
{
    int index=str.indexOf("http://",index);
    bool flag=true;
    if (index>-1)
    {
        flag=false;
    }
    return flag;
}
bool Browser::ComboboxClear()
{
    ui->comboBox->clear();
    return true;
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
bool Browser::on_lineEdit_returnPressedCheck()
{
    try {
        url_str = this->ui->lineEdit->text();
        if (!url_str.startsWith("http://")){
        url_str = "http://" + url_str;
        }
        QUrl url(url_str);
        this->ui->webView->load(url);
        return true;

    } catch (...) {
        return false;
    }

}

void Browser::showHide(QSystemTrayIcon::ActivationReason r)
{
    if (r==QSystemTrayIcon::Trigger)
    {
    if (!this->isVisible())
        {
       this->show();
    }
    else
    {
       this->hide();
    }
}
}


void Browser::on_pushButton_clicked()
{
//    ui->lineEdit->setText(url_str);
}
bool Browser::on_pushButton_clickedCheck()
{
    try {
        //    ui->lineEdit->setText(url_str);
        return true;
    } catch (...) {
        return false;
    }

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
    bool kl=ComboboxClear();
    lineEditText=ui->lineEdit->text();
    QSqlQuery query;
    query.exec("SELECT * FROM sites WHERE name LIKE '%"+lineEditText+"%'");
    while (query.next())
    {
        ui->comboBox->addItem((query.value(1).toString()));
    }
}
bool Browser::on_lineEdit_textChangedCheck(QString lineEditText)
{
    try {
        bool kl=ComboboxClear();
        lineEditText=ui->lineEdit->text();
        QSqlQuery query;
        query.exec("SELECT * FROM sites WHERE name LIKE '%"+lineEditText+"%'");
        while (query.next())
        {
            ui->comboBox->addItem((query.value(1).toString()));
        }
        return true;
    } catch (...) {
        return false;
    }

}


void Browser::on_comboBox_activated(QString fff)
{
    ui->lineEdit->setText(fff);
}
bool Browser::on_comboBox_activatedCheck(QString fff)
{
    try {
        ui->lineEdit->setText(fff);
        return true;
    }
    catch (...) {
      return false;
    }
}

bool Browser::exitBrowser()
 {
    QApplication::exit();
    return true;
 }
bool Browser::exitBrowserCheck()
 {
    try {
        QApplication::exit();
        return true;
    } catch (...) {
        return false;
    }

 }
void Browser::TrayBrowser()
 {
    QApplication::exit();
 }

bool Browser::TrayBrowserCheck()
 {
    try {
        QApplication::exit();
        return true;
    } catch (...) {
        return false;
    }

 }
void Browser::changeEvent(QEvent *e)
{
        if (e->type() == QEvent::WindowStateChange && isMinimized())
        {

                QTimer::singleShot(0, this, SLOT(hide()));
                e->ignore();
        }
        else
                QMainWindow::changeEvent(e);
}



void Browser::Open()
{
    QString fileName = QFileDialog::getOpenFileName(this,"","","HTML page(*.html)");
    if (!fileName.isEmpty())
    {
        // read from file
        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        qDebug()<<"file:// "<<fileName;

        ui->webView->load(fileName);
        //in << ui->webView->page()->mainFrame()->setHtml();
       // QUrl fileURL("file://" + fileName);

    }
}

bool Browser::OpenCheck()
{
    try {
        QString fileName = QFileDialog::getOpenFileName(this,"","","HTML page(*.html)");
        if (!fileName.isEmpty())
        {
            // read from file
            QFile file(fileName);

            if (!file.open(QIODevice::ReadOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return false;
            }
            qDebug()<<"file:// "<<fileName;

            ui->webView->load(fileName);
            //in << ui->webView->page()->mainFrame()->setHtml();
           // QUrl fileURL("file://" + fileName);

        }
        return true;
    } catch (...) {
        return false;
    }

}


void Browser::save()
 {
    QString fileName = QFileDialog::getSaveFileName(this,"","","HTML Страница(*.html)");
     if (!fileName.isEmpty()) {
         // save to file
         QFile file(fileName);

         if (!file.open(QIODevice::WriteOnly)) {
             QMessageBox::information(this, tr("Unable to open file"),
                 file.errorString());
             return;
         }

         QTextStream in(&file);
         in << ui->webView->page()->mainFrame()->toHtml();
         file.close();
     }
 }

bool Browser::saveCheck()
 {
    try {
        QString fileName = QFileDialog::getSaveFileName(this,"","","HTML Страница(*.html)");
         if (!fileName.isEmpty()) {
             // save to file
             QFile file(fileName);

             if (!file.open(QIODevice::WriteOnly)) {
                 QMessageBox::information(this, tr("Unable to open file"),
                     file.errorString());
                 return false;
             }

             QTextStream in(&file);
             in << ui->webView->page()->mainFrame()->toHtml();
             file.close();
         }
         return true;
    } catch (...) {
        return false;
    }

 }


void Browser::helpAbout()
{
    QMessageBox::about(this, "About QMenus",
                        "This example implements an in-place ActiveX control with menus and status messages.");
}

bool Browser::helpAboutCheck()
{
    try {
        QMessageBox::about(this, "About QMenus",
                            "This example implements an in-place ActiveX control with menus and status messages.");
        return true;
    } catch (...) {
        return false;
    }

}

void Browser::helpAboutQt()
{
    QMessageBox::aboutQt(this);
}

bool Browser::helpAboutQtCheck()
{
    try {
        QMessageBox::aboutQt(this);
        return true;
    } catch (...) {
        return false;
    }

}


