#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>
#include <QtSql>
#include <QSystemTrayIcon>
#include <QtGui>

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
    QSqlQueryModel *modelComplection;
    QString url_str;
    QString lineEditText;

private slots:
    void on_comboBox_activated(QString );
    void on_lineEdit_textChanged(QString );
    void on_lineEdit_returnPressed();
    void showHide(QSystemTrayIcon::ActivationReason);
    void on_pushButton_clicked();
    void linkchange(const QUrl & url);
};



#endif // BROWSER_H
