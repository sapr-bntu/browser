#include <QtGui/QApplication>
//#include <QtSql/QIBaseDriver>
//#include <QtSql/QDB2Driver>
//#include <QtSql/QMYSQLDriver>
#include "browser.h"
#include <QtGui>
#include <QTextCodec>

int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);

    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    Browser *w=new Browser;
    w->show();
//    QApplication::setQuitOnLastWindowClosed(true);
    return a.exec();
}


