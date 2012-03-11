#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtCore/QCoreApplication>
#include "../Browser/browser/browser.h"

class Test2Test : public QObject
{
    Q_OBJECT
    
public:
    Test2Test();
    
private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();


    void on_lineEdit_textChanged();
    void lineEditClearTest();
    void exitBrowser();
    void TrayBrowser();
    void helpAbout();
    void helpAboutQt();
    void on_lineEdit_returnPress();
    void on_comboBox_active();
    void savepage();
    void Openpage();
};

Test2Test::Test2Test()
{
}

void Test2Test::initTestCase()
{
}

void Test2Test::cleanupTestCase()
{
}

void Test2Test::testCase1()
{
    Browser br;
    QVERIFY2(true, "Failure");
}

void Test2Test::on_lineEdit_textChanged()
{
    Browser br;
    bool flag=br.on_lineEdit_textChanged();
    QCOMPARE(true, flag);
}

void Test2Test::lineEditClearTest()
{
    Browser br;
    bool flag=br.lineEditClear();
    QCOMPARE(true, flag);
}

void Test2Test::on_comboBox_active()
{
    Browser br;
    bool flag=br.on_comboBox_active();
    QCOMPARE(true, flag);
}
//void Test2Test::link_changed()
//{
//    Browser br;
//    bool flag=br.link_changed();
//    QCOMPARE(true, flag);
//}

//void Test2Test::helpAboutMenu()
//{
//    QMessageBox::about(this, "About QMenus",
//                        "This example implements an in-place ActiveX control with menus and status messages.");
//    ui->actionAbout->connect();
//    return true;
//    Browser br;
//    bool flag=br.HelpAbout();
//    QCOMPARE(true, flag);
//}

void Test2Test::exitBrowser()
 {
    Browser br;
    bool flag=br.exitBrowser();
    QCOMPARE(true, flag);
 }

void Test2Test::TrayBrowser()
{
    Browser br;
    bool flag=br.TrayBrowser();
    QCOMPARE(true, flag);
}

void Test2Test::helpAbout()
{
    Browser br;
    bool flag=br.helpAbout();
    QCOMPARE(true, flag);
}

void Test2Test::helpAboutQt()
{
    Browser br;
    bool flag=br.helpAboutQt();
    QCOMPARE(true, flag);
}

void Test2Test::on_lineEdit_returnPress()
{
    Browser br;
    bool flag=br.on_lineEdit_returnPress();
    QCOMPARE(true, flag);
}

//void Test2Test::changeOnEvent()
//{
//    Browser br;
//    bool flag=br.changeOnEvent();
//    QCOMPARE(true, flag);
//}

void Test2Test::savepage()
{
    Browser br;
    bool flag=br.savepage();
    QCOMPARE(true, flag);
}

void Test2Test::Openpage()
{
    Browser br;
    bool flag=br.Openpage();
    QCOMPARE(true, flag);
}

//void Test2Test::show_Hide()
//{
//    Browser br;
//    bool flag=br.show_Hide();
//    QCOMPARE(true, flag);
//}

QTEST_MAIN(Test2Test)

#include "tst_test2test.moc"
