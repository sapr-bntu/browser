#include "browser.h"
#include "connect.h"
#include "ui_browser.h"

Browser::Browser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Browser)
{
    ui->setupUi(this);
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
