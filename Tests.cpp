#include <QtGui>
#include <QtTest/QtTest>

 class TestGui: public QObject
 { Q_OBJECT
 private slots:
     void testGui();
     void pressButton();
 };
 //�������� c����������� �������� �������� � �������� � lineEdit
 void TestGui::testGui()
 {
     QLineEdit lineEdit;
     QTest::keyClicks(&lineEdit, "http://bash.org.ru");
     QCOMPARE(lineEdit.text(), QString("http://bash.org.ru"));
 }