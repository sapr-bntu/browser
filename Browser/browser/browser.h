#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>
#include <QtSql>
#include <QSystemTrayIcon>
#include <QtGui>
#include <QtWebKit>

namespace Ui {
    class Browser;
}

class Browser : public QMainWindow
{
    Q_OBJECT

public:
    explicit Browser(QWidget *parent = 0);
    ~Browser();

public:
    QSystemTrayIcon *trIcon;
    Ui::Browser *ui;
    QSqlQueryModel *model;
    QSqlQueryModel *modelComplection;
    QString url_str;
    QString lineEditText;
    QString prev_url_str;
    QString next_url_str;

public slots:
    void on_comboBox_activated(QString );
    void on_lineEdit_textChanged(QString );
    void on_lineEdit_returnPressed();
    void showHide(QSystemTrayIcon::ActivationReason);
    void on_pushButton_clicked();
    void linkchange(const QUrl & url);
    bool exitBrowser();
    void TrayBrowser();
    void helpAbout();
    void helpAboutQt();
    void changeEvent(QEvent* );
    void Open();
    void save();
    bool UrlWithoutDomen(QString str);
    bool UrlWithDomen(QString str);
    bool UrlWithoutHTTP(QString str);
    bool UrlWithHTTP(QString str);
    bool ComboboxClear();

    bool on_comboBox_activatedCheck(QString );
    bool on_lineEdit_textChangedCheck(QString );
    bool on_lineEdit_returnPressedCheck();
    bool on_pushButton_clickedCheck();
    bool exitBrowserCheck();
    bool TrayBrowserCheck();
    bool helpAboutCheck();
    bool helpAboutQtCheck();
    bool OpenCheck();
    bool saveCheck();
};



#endif // BROWSER_H
