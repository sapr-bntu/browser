#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>
//#include <QSqlDatabase>
//#include <QSqlField>
#include <QtSql>

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
    Ui::Browser *ui;
    QSqlQueryModel *model;

private slots:
    void on_lineEdit_returnPressed();
};

#endif // BROWSER_H
