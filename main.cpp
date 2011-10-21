#include <QtGui/QApplication>
//#include <QtSql/QIBaseDriver>
//#include <QtSql/QDB2Driver>
//#include <QtSql/QMYSQLDriver>
#include "browser.h"
//#include <QtSql>

int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);
    Browser w;
    w.show();

    return a.exec();
}
