#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtGui>

class Test_QLineEdit : public QObject {
Q_OBJECT
private slots:
    void edit();
};

void Test_QLineEdit::edit()
{
        QLineEdit lineEdit;
         QTest::keyClicks(&lineEdit, "http://filestore.com.ua");
         QCOMPARE(lineEdit.text(), QString("http://filestore.co.ua"));
         QVERIFY(lineEdit.isModified());
}

QTEST_MAIN(Test_QLineEdit)

#include "test_qlineedit.moc"
