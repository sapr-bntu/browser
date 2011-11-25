#include <QtGui/QApplication>
//#include <QtSql/QIBaseDriver>
//#include <QtSql/QDB2Driver>
//#include <QtSql/QMYSQLDriver>
#include "browser.h"



int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);
    Browser *w=new Browser;
    w->show();
    QApplication::setQuitOnLastWindowClosed(true);
    return a.exec();
}


