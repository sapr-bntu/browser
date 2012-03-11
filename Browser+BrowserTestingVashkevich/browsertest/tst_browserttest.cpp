#include <QtCore/QString>
#include <QtGui>
#include <QtTest/QtTest>
#include <QLineEdit>
#include <QtCore/QCoreApplication>
#include "../Browser/browser/browser.h"
//#include "../.."

class BrowsertTest : public QObject
{
    Q_OBJECT
    
public:
    BrowsertTest();
    
private Q_SLOTS:
    void testCase1();
    void GetWebKitVersion();
    void CorrectLineEdit();
    void PutIncorrectUrl();
    void PutCorrectUrl();
    void UrlWithoutDot();
    void UrlWithDot();
    void UrlWithoutDomen();
    void UrlWithDomen();
    void UrlWithoutHTTP();
    void UrlWithHTTP();



    void CorrectRecordInDataBase();
    void PressPrev();
    void linkchangeTest();

};

BrowsertTest::BrowsertTest()
{

}

void BrowsertTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void BrowsertTest::GetWebKitVersion()
{
    QVERIFY(qWebKitVersion().toDouble() > 0);
}

void BrowsertTest::CorrectLineEdit()
{
    Browser br;
//    bool flag = br.exitBrowser();
    QLineEdit* lineEdit = br.ui->lineEdit;
    QTest::keyClicks(lineEdit, "http://bash.org.ru");
    QCOMPARE(lineEdit->text(), QString("http://bash.org.ru"));
    QCOMPARE(true, flag);

}

void BrowsertTest::PutIncorrectUrl()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "1234");
    bool flag=false;
//    try
//    {
//        int str;
//        QString mystr=lineEdit.text();
//        str=mystr.toInt();
//    }
//    catch()
//    {
//        flag=true;
//    }
    QCOMPARE(flag,false);
}

void BrowsertTest::PutCorrectUrl()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "http://bash.org.ru");
    bool flag=false;
//    try
//    {
//        int str;
//        QString mystr=lineEdit.text();
//        str=mystr.toInt();
//    }
//    catch()
//    {
//        flag=true;
//    }
    QCOMPARE(flag,true);
}

void BrowsertTest::UrlWithoutDot()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "http://bash");
    QString str=lineEdit.text();
    int index=str.indexOf(".",index);
    bool flag=true;
    if (index==-1)
    {
        flag=false;
    }
    QCOMPARE(flag,false);
}

void BrowsertTest::UrlWithDot()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "http://bash.org.ru");
    QString str=lineEdit.text();
    int index=str.indexOf(".",index);
    bool flag=false;
    if (index!=-1)
    {
        flag=true;
    }
    QCOMPARE(flag,true);
}

void BrowsertTest::UrlWithoutDomen()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "http://bashorgru.");
    QString str=lineEdit.text();
    int index=str.lastIndexOf(".",index);
    bool flag=true;
    if (index==-1 || index==(str.length()-1))
    {
        flag=false;
    }
    QCOMPARE(flag,false);
}

void BrowsertTest::UrlWithDomen()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "http://bash.org.ru");
    QString str=lineEdit.text();
    int index=str.lastIndexOf(".",index);
    bool flag=false;
    if (index!=-1 || index!=(str.length()-1))
    {
        flag=true;
    }
    QCOMPARE(flag,true);
}

void BrowsertTest::UrlWithoutHTTP()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "bash.org.ru");
    QString str=lineEdit.text();
    int index=str.lastIndexOf("http://",index);
    bool flag=true;
    if (index==-1 || index!=0)
    {
        flag=false;
    }
    QCOMPARE(flag,false);
}

void BrowsertTest::UrlWithHTTP()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "http://bash.org.ru");
    QString str=lineEdit.text();
    int index=str.lastIndexOf("http://",index);
    bool flag=false;
    if (index==0)
    {
        flag=true;
    }
    QCOMPARE(flag,true);
}











void BrowsertTest::CorrectRecordInDataBase()
{
  //  ui
}

void BrowsertTest::PressPrev()
{
    QPushButton push;

   // bool flag=true;
   // try
   // {
       // Browser::connect(webkit)
    //}
}

void BrowsertTest::linkchangeTest()
{
    //Browser::connect()
}

QTEST_MAIN(BrowsertTest)

#include "tst_browserttest.moc"


