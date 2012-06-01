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
    void GetWebKitVersion();
    void UrlWithoutDomenTest();
    void UrlWithDomenTest();
    void UrlWithoutHTTPTest();
    void UrlWithHTTPTest();
    void ComboboxClearTest();
    void on_comboBox_activatedCheckTest();
    void on_lineEdit_textChangedCheckTest();
    void on_lineEdit_returnPressedCheckTest();
    void on_pushButton_clickedCheckTest();
    void exitBrowserCheckTest();
    void TrayBrowserCheckTest();
    void helpAboutCheckTest();
    void helpAboutQtCheckTest();
    void OpenCheckTest();
    void saveCheckTest();
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

void Test2Test::GetWebKitVersion()
{
    QVERIFY(qWebKitVersion().toDouble() > 0);
}


void Test2Test::UrlWithoutDomenTest()
{
    Browser br;
    bool flag=br.UrlWithoutDomen("http://bashorgru");
    QCOMPARE(true, flag);
}

void Test2Test::UrlWithDomenTest()
{
    Browser br;
    bool flag=br.UrlWithDomen("http://bash.org.ru");
    QCOMPARE(true, flag);
}

void Test2Test::UrlWithoutHTTPTest()
{
    Browser br;
    bool flag=br.UrlWithoutHTTP("bash.org.ru");
    QCOMPARE(true, flag);
}

void Test2Test::UrlWithHTTPTest()
{
    Browser br;
    bool flag=br.UrlWithHTTP("http://bash.org.ru");
    QCOMPARE(true, flag);
}

void Test2Test::ComboboxClearTest()
{
    Browser br;
    bool flag=br.ComboboxClear();
    QCOMPARE(true, flag);
}
void Test2Test::on_comboBox_activatedCheckTest()
{
   Browser br;
   bool flag=br.on_comboBox_activatedCheck("http://tut.by");
   QCOMPARE(true, flag);
}

void Test2Test::on_lineEdit_textChangedCheckTest()
{
   Browser br;
   bool flag=br.on_lineEdit_textChangedCheck("http://fansubs.ru/");
   QCOMPARE(true, flag);
}

void Test2Test::on_lineEdit_returnPressedCheckTest()
{
   Browser br;
   bool flag=br.on_lineEdit_returnPressedCheck();
   QCOMPARE(true, flag);
}

void Test2Test::on_pushButton_clickedCheckTest()
{
   Browser br;
   bool flag=br.on_pushButton_clickedCheck();
   QCOMPARE(true, flag);
}

void Test2Test::exitBrowserCheckTest()
{
   Browser br;
   bool flag=br.exitBrowserCheck();
   QCOMPARE(true, flag);
}

void Test2Test::TrayBrowserCheckTest()
{
   Browser br;
   bool flag=br.TrayBrowserCheck();
   QCOMPARE(true, flag);
}

void Test2Test::helpAboutCheckTest()
{
   Browser br;
   bool flag=br.helpAboutCheck();
   QCOMPARE(true, flag);
}

void Test2Test::helpAboutQtCheckTest()
{
   Browser br;
   bool flag=br.helpAboutQtCheck();
   QCOMPARE(true, flag);
}

void Test2Test::OpenCheckTest()
{
   Browser br;
   bool flag=br.OpenCheck();
   QCOMPARE(true, flag);
}

void Test2Test::saveCheckTest()
{
   Browser br;
   bool flag=br.saveCheck();
   QCOMPARE(true, flag);
}

QTEST_MAIN(Test2Test)

#include "tst_test2test.moc"
