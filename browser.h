#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>
#include <QtSql>
#include <QSystemTrayIcon>

namespace Ui {
    class Browser;
}

class Browser : public QMainWindow
{
    Q_OBJECT

public:
    explicit Browser(QWidget *parent = 0);
    ~Browser();

private:
    QSystemTrayIcon *trIcon;
    Ui::Browser *ui;
    QSqlQueryModel *model;

private slots:
    void on_lineEdit_returnPressed();


    void showHide(QSystemTrayIcon::ActivationReason);
};



#endif // BROWSER_H
