/********************************************************************************
** Form generated from reading UI file 'browser.ui'
**
** Created: Wed 29. Feb 19:47:59 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_H
#define UI_BROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_Browser
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_5;
    QAction *action_6;
    QAction *action_8;
    QAction *action_10;
    QAction *action_11;
    QAction *action_13;
    QAction *action_14;
    QAction *action_15;
    QAction *action_17;
    QAction *action_18;
    QAction *action_19;
    QAction *action_20;
    QAction *action_21;
    QAction *action_23;
    QAction *action_24;
    QAction *action_25;
    QAction *action_26;
    QAction *action_28;
    QAction *action_31;
    QAction *action_34;
    QAction *action_35;
    QAction *action_37;
    QAction *action_38;
    QAction *action_39;
    QAction *action_40;
    QAction *action_41;
    QAction *action_42;
    QAction *action_43;
    QAction *action_45;
    QAction *action50;
    QAction *action80;
    QAction *action90;
    QAction *action100;
    QAction *action120;
    QAction *action150;
    QAction *action200;
    QAction *action_100;
    QAction *action_101;
    QAction *action_50;
    QAction *action_51;
    QAction *action_52;
    QAction *action_56;
    QAction *action_57;
    QAction *action_59;
    QAction *action_61;
    QAction *action_62;
    QAction *action_63;
    QAction *action_64;
    QAction *action_65;
    QAction *action_67;
    QAction *action_68;
    QAction *action_69;
    QAction *action_70;
    QAction *action_71;
    QAction *action_72;
    QAction *action_73;
    QAction *action_75;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionReload;
    QAction *actionStop;
    QAction *actionTray;
    QAction *actionAbout;
    QAction *actionAbout_QT;
    QAction *actionOpen_2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QWebView *webView;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Browser)
    {
        if (Browser->objectName().isEmpty())
            Browser->setObjectName(QString::fromUtf8("Browser"));
        Browser->resize(639, 501);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0.488, 0, 0.497, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(181, 177, 177, 255));
        gradient.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(170, 170, 170, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0.488, 0, 0.497, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(181, 177, 177, 255));
        gradient1.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush5(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        QLinearGradient gradient2(0.488, 0, 0.497, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(181, 177, 177, 255));
        gradient2.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush6(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.488, 0, 0.497, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(181, 177, 177, 255));
        gradient3.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush8(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0.488, 0, 0.497, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(181, 177, 177, 255));
        gradient4.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush9(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        QLinearGradient gradient5(0.488, 0, 0.497, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(181, 177, 177, 255));
        gradient5.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush10(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        QLinearGradient gradient6(0.488, 0, 0.497, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(181, 177, 177, 255));
        gradient6.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush11(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        QLinearGradient gradient7(0.488, 0, 0.497, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(181, 177, 177, 255));
        gradient7.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush12(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        QLinearGradient gradient8(0.488, 0, 0.497, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(181, 177, 177, 255));
        gradient8.setColorAt(1, QColor(69, 64, 64, 255));
        QBrush brush13(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Browser->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        Browser->setWindowIcon(icon);
        Browser->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.488, y1:0, x2:0.497, y2:1,\n"
"stop:0 rgba(181, 177, 177, 255), \n"
"stop:1 rgba(69, 64, 64, 255));\n"
""));
        action = new QAction(Browser);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(Browser);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(Browser);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_5 = new QAction(Browser);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(Browser);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_8 = new QAction(Browser);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_10 = new QAction(Browser);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        action_11 = new QAction(Browser);
        action_11->setObjectName(QString::fromUtf8("action_11"));
        action_13 = new QAction(Browser);
        action_13->setObjectName(QString::fromUtf8("action_13"));
        action_14 = new QAction(Browser);
        action_14->setObjectName(QString::fromUtf8("action_14"));
        action_15 = new QAction(Browser);
        action_15->setObjectName(QString::fromUtf8("action_15"));
        action_17 = new QAction(Browser);
        action_17->setObjectName(QString::fromUtf8("action_17"));
        action_18 = new QAction(Browser);
        action_18->setObjectName(QString::fromUtf8("action_18"));
        action_19 = new QAction(Browser);
        action_19->setObjectName(QString::fromUtf8("action_19"));
        action_20 = new QAction(Browser);
        action_20->setObjectName(QString::fromUtf8("action_20"));
        action_21 = new QAction(Browser);
        action_21->setObjectName(QString::fromUtf8("action_21"));
        action_23 = new QAction(Browser);
        action_23->setObjectName(QString::fromUtf8("action_23"));
        action_24 = new QAction(Browser);
        action_24->setObjectName(QString::fromUtf8("action_24"));
        action_25 = new QAction(Browser);
        action_25->setObjectName(QString::fromUtf8("action_25"));
        action_26 = new QAction(Browser);
        action_26->setObjectName(QString::fromUtf8("action_26"));
        action_28 = new QAction(Browser);
        action_28->setObjectName(QString::fromUtf8("action_28"));
        action_31 = new QAction(Browser);
        action_31->setObjectName(QString::fromUtf8("action_31"));
        action_34 = new QAction(Browser);
        action_34->setObjectName(QString::fromUtf8("action_34"));
        action_35 = new QAction(Browser);
        action_35->setObjectName(QString::fromUtf8("action_35"));
        action_37 = new QAction(Browser);
        action_37->setObjectName(QString::fromUtf8("action_37"));
        action_38 = new QAction(Browser);
        action_38->setObjectName(QString::fromUtf8("action_38"));
        action_39 = new QAction(Browser);
        action_39->setObjectName(QString::fromUtf8("action_39"));
        action_40 = new QAction(Browser);
        action_40->setObjectName(QString::fromUtf8("action_40"));
        action_41 = new QAction(Browser);
        action_41->setObjectName(QString::fromUtf8("action_41"));
        action_42 = new QAction(Browser);
        action_42->setObjectName(QString::fromUtf8("action_42"));
        action_43 = new QAction(Browser);
        action_43->setObjectName(QString::fromUtf8("action_43"));
        action_45 = new QAction(Browser);
        action_45->setObjectName(QString::fromUtf8("action_45"));
        action50 = new QAction(Browser);
        action50->setObjectName(QString::fromUtf8("action50"));
        action80 = new QAction(Browser);
        action80->setObjectName(QString::fromUtf8("action80"));
        action90 = new QAction(Browser);
        action90->setObjectName(QString::fromUtf8("action90"));
        action100 = new QAction(Browser);
        action100->setObjectName(QString::fromUtf8("action100"));
        action120 = new QAction(Browser);
        action120->setObjectName(QString::fromUtf8("action120"));
        action150 = new QAction(Browser);
        action150->setObjectName(QString::fromUtf8("action150"));
        action200 = new QAction(Browser);
        action200->setObjectName(QString::fromUtf8("action200"));
        action_100 = new QAction(Browser);
        action_100->setObjectName(QString::fromUtf8("action_100"));
        action_101 = new QAction(Browser);
        action_101->setObjectName(QString::fromUtf8("action_101"));
        action_50 = new QAction(Browser);
        action_50->setObjectName(QString::fromUtf8("action_50"));
        action_51 = new QAction(Browser);
        action_51->setObjectName(QString::fromUtf8("action_51"));
        action_52 = new QAction(Browser);
        action_52->setObjectName(QString::fromUtf8("action_52"));
        action_56 = new QAction(Browser);
        action_56->setObjectName(QString::fromUtf8("action_56"));
        action_57 = new QAction(Browser);
        action_57->setObjectName(QString::fromUtf8("action_57"));
        action_59 = new QAction(Browser);
        action_59->setObjectName(QString::fromUtf8("action_59"));
        action_61 = new QAction(Browser);
        action_61->setObjectName(QString::fromUtf8("action_61"));
        action_62 = new QAction(Browser);
        action_62->setObjectName(QString::fromUtf8("action_62"));
        action_63 = new QAction(Browser);
        action_63->setObjectName(QString::fromUtf8("action_63"));
        action_64 = new QAction(Browser);
        action_64->setObjectName(QString::fromUtf8("action_64"));
        action_65 = new QAction(Browser);
        action_65->setObjectName(QString::fromUtf8("action_65"));
        action_67 = new QAction(Browser);
        action_67->setObjectName(QString::fromUtf8("action_67"));
        action_68 = new QAction(Browser);
        action_68->setObjectName(QString::fromUtf8("action_68"));
        action_69 = new QAction(Browser);
        action_69->setObjectName(QString::fromUtf8("action_69"));
        action_70 = new QAction(Browser);
        action_70->setObjectName(QString::fromUtf8("action_70"));
        action_71 = new QAction(Browser);
        action_71->setObjectName(QString::fromUtf8("action_71"));
        action_72 = new QAction(Browser);
        action_72->setObjectName(QString::fromUtf8("action_72"));
        action_73 = new QAction(Browser);
        action_73->setObjectName(QString::fromUtf8("action_73"));
        action_75 = new QAction(Browser);
        action_75->setObjectName(QString::fromUtf8("action_75"));
        actionOpen = new QAction(Browser);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Browser);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionClose = new QAction(Browser);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionBack = new QAction(Browser);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        actionForward = new QAction(Browser);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        actionReload = new QAction(Browser);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        actionStop = new QAction(Browser);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionTray = new QAction(Browser);
        actionTray->setObjectName(QString::fromUtf8("actionTray"));
        actionAbout = new QAction(Browser);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_QT = new QAction(Browser);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        actionOpen_2 = new QAction(Browser);
        actionOpen_2->setObjectName(QString::fromUtf8("actionOpen_2"));
        centralWidget = new QWidget(Browser);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setMaximumSize(QSize(16777215, 40));
        frame->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: qlineargradient(spread:pad, x1:0.488, y1:0, x2:0.497, y2:1,\n"
"stop:0 rgba(170, 164,164, 255), \n"
"stop:1 rgba(69, 64, 64, 255));\n"
"border-bottom:1px solid rgb(79,101,125);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(33, 22));
        pushButton->setMaximumSize(QSize(33, 23));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"border-radius: 5px;\n"
"background-image: url(:/img/img/button_left2.bmp);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" border: none;\n"
" background-image: url(:/img/img/left.bmp);\n"
"}\n"
"\n"
"QPushButton:hover:pressed {\n"
" border: none;\n"
" background-image: url(:/img/img/left.bmp);\n"
"}\n"
""));
        pushButton->setIconSize(QSize(33, 23));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(33, 22));
        pushButton_2->setMaximumSize(QSize(33, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"border-radius: 5px;\n"
" background-image: url(:/img/img/batton_right2.bmp);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" border: none;\n"
" background-image: url(:/img/img/right.bmp);\n"
"}\n"
"\n"
"QPushButton:hover:pressed {\n"
" border: none;\n"
" background-image: url(:/img/img/right.bmp);\n"
"}"));
        pushButton_2->setIconSize(QSize(33, 23));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(33, 22));
        pushButton_4->setMaximumSize(QSize(33, 23));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"border-radius: 5px;\n"
" background-image: url(:/img/img/update4.bmp);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" border: none;\n"
" background-image: url(:/img/img/update.bmp);\n"
"}\n"
"\n"
"QPushButton:hover:pressed {\n"
" border: none;\n"
" background-image: url(:/img/img/update.bmp);\n"
"}"));
        pushButton_4->setIconSize(QSize(33, 23));

        horizontalLayout->addWidget(pushButton_4);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(150, 0));
        comboBox->setIconSize(QSize(20, 16));

        horizontalLayout->addWidget(comboBox);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(15, 23));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid #707070;\n"
"border-radius: 3px;\n"
"}\n"
""));
        lineEdit->setMaxLength(400);

        horizontalLayout->addWidget(lineEdit);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(21, 21));
        pushButton_3->setMaximumSize(QSize(21, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"border-radius: 5px;\n"
" background-image: url(:/img/img/x.bmp);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" border: none;\n"
" background-image: url(:/img/img/x2.bmp);\n"
"}\n"
"\n"
"QPushButton:hover:pressed {\n"
" border: none;\n"
" background-image: url(:/img/img/x2.bmp);\n"
"}"));
        pushButton_3->setIconSize(QSize(21, 21));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addWidget(frame);

        webView = new QWebView(centralWidget);
        webView->setObjectName(QString::fromUtf8("webView"));

        verticalLayout->addWidget(webView);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setMinimumSize(QSize(0, 15));
        progressBar->setMaximumSize(QSize(395, 15));
        progressBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border-bottom:1px solid rgb(0,0,0);\n"
"border-top:1px solid rgb(0,0,0);\n"
"border-left:1px solid rgb(0,0,0);\n"
"border-right:1px solid rgb(0,0,0);\n"
"text-align:center;\n"
"background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"background-color: qlineargradient(spread:pad, x1:0.488, y1:0,\n"
"x2:0.497, y2:1, stop:0 #85B3E8, stop:1 #3067a5);\n"
"width: 9px;\n"
"margin: 1px;\n"
"margin-right:0px;\n"
"padding:1px;\n"
"border:1px solid black;\n"
"}\n"
""));
        progressBar->setValue(100);
        progressBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(progressBar);

        Browser->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Browser);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 639, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Browser->setMenuBar(menuBar);
        statusBar = new QStatusBar(Browser);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Browser->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMenu->addAction(actionClose);
        menuMenu->addSeparator();
        menuMenu->addAction(actionBack);
        menuMenu->addAction(actionForward);
        menuMenu->addAction(actionReload);
        menuMenu->addAction(actionStop);
        menuMenu->addSeparator();
        menuMenu->addAction(actionTray);
        menuMenu->addAction(actionOpen_2);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_QT);

        retranslateUi(Browser);
        QObject::connect(pushButton, SIGNAL(clicked()), webView, SLOT(back()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), webView, SLOT(forward()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), webView, SLOT(stop()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), webView, SLOT(reload()));
        QObject::connect(webView, SIGNAL(loadProgress(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(actionOpen, SIGNAL(changed()), Browser, SLOT(show()));
        QObject::connect(actionClose, SIGNAL(changed()), Browser, SLOT(close()));
        QObject::connect(actionForward, SIGNAL(changed()), webView, SLOT(forward()));
        QObject::connect(actionBack, SIGNAL(changed()), webView, SLOT(back()));
        QObject::connect(actionReload, SIGNAL(changed()), webView, SLOT(reload()));
        QObject::connect(actionStop, SIGNAL(changed()), webView, SLOT(stop()));
        QObject::connect(actionTray, SIGNAL(changed()), Browser, SLOT(close()));

        QMetaObject::connectSlotsByName(Browser);
    } // setupUi

    void retranslateUi(QMainWindow *Browser)
    {
        Browser->setWindowTitle(QApplication::translate("Browser", "Browser", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("Browser", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("Browser", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\276\320\272\320\275\320\276", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("Browser", "\320\236\321\202\320\272\321\200\320\262\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("Browser", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", 0, QApplication::UnicodeUTF8));
        action_6->setText(QApplication::translate("Browser", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", 0, QApplication::UnicodeUTF8));
        action_8->setText(QApplication::translate("Browser", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", 0, QApplication::UnicodeUTF8));
        action_10->setText(QApplication::translate("Browser", "\320\241\320\265\320\260\320\275\321\201\321\213", 0, QApplication::UnicodeUTF8));
        action_11->setText(QApplication::translate("Browser", "\320\230\320\274\320\277\320\276\321\200\321\202 \320\270 \321\215\320\272\321\201\320\277\320\276\321\200\321\202", 0, QApplication::UnicodeUTF8));
        action_13->setText(QApplication::translate("Browser", "\320\237\320\265\321\207\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_14->setText(QApplication::translate("Browser", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\320\265\321\207\320\260\321\202\320\270", 0, QApplication::UnicodeUTF8));
        action_15->setText(QApplication::translate("Browser", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\277\320\265\321\207\320\260\321\202\320\270", 0, QApplication::UnicodeUTF8));
        action_17->setText(QApplication::translate("Browser", "\320\241\320\270\320\275\321\205\321\200\320\276\320\275\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_18->setText(QApplication::translate("Browser", "\320\240\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \320\260\320\262\321\202\320\276\320\275\320\276\320\274\320\275\320\276", 0, QApplication::UnicodeUTF8));
        action_19->setText(QApplication::translate("Browser", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        action_20->setText(QApplication::translate("Browser", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_21->setText(QApplication::translate("Browser", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_23->setText(QApplication::translate("Browser", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_24->setText(QApplication::translate("Browser", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_25->setText(QApplication::translate("Browser", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", 0, QApplication::UnicodeUTF8));
        action_26->setText(QApplication::translate("Browser", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_28->setText(QApplication::translate("Browser", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\262\321\201\320\265", 0, QApplication::UnicodeUTF8));
        action_31->setText(QApplication::translate("Browser", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\276\321\200\321\204\320\276\320\263\321\200\320\260\321\204\320\270\321\216", 0, QApplication::UnicodeUTF8));
        action_34->setText(QApplication::translate("Browser", "\320\235\320\260\320\271\321\202\320\270", 0, QApplication::UnicodeUTF8));
        action_35->setText(QApplication::translate("Browser", "\320\235\320\260\320\271\321\202\320\270 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265", 0, QApplication::UnicodeUTF8));
        action_37->setText(QApplication::translate("Browser", "\320\237\320\260\320\275\320\265\320\273\320\270", 0, QApplication::UnicodeUTF8));
        action_38->setText(QApplication::translate("Browser", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217 \320\277\320\260\320\275\320\265\320\273\321\214", 0, QApplication::UnicodeUTF8));
        action_39->setText(QApplication::translate("Browser", "\320\233\320\270\321\207\320\275\320\260\321\217 \320\277\320\260\320\275\320\265\320\273\321\214", 0, QApplication::UnicodeUTF8));
        action_40->setText(QApplication::translate("Browser", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\262\320\272\320\273\320\260\320\264\320\276\320\272", 0, QApplication::UnicodeUTF8));
        action_41->setText(QApplication::translate("Browser", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        action_42->setText(QApplication::translate("Browser", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\321\200\320\265\321\201\320\260", 0, QApplication::UnicodeUTF8));
        action_43->setText(QApplication::translate("Browser", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\275\320\260\320\262\320\270\320\263\320\260\321\206\320\270\320\270", 0, QApplication::UnicodeUTF8));
        action_45->setText(QApplication::translate("Browser", "\320\235\320\260\321\201\321\202\321\200\320\276\320\270\321\202\321\214...", 0, QApplication::UnicodeUTF8));
        action50->setText(QApplication::translate("Browser", "50%", 0, QApplication::UnicodeUTF8));
        action80->setText(QApplication::translate("Browser", "80%", 0, QApplication::UnicodeUTF8));
        action90->setText(QApplication::translate("Browser", "90%", 0, QApplication::UnicodeUTF8));
        action100->setText(QApplication::translate("Browser", "100%", 0, QApplication::UnicodeUTF8));
        action120->setText(QApplication::translate("Browser", "120%", 0, QApplication::UnicodeUTF8));
        action150->setText(QApplication::translate("Browser", "150%", 0, QApplication::UnicodeUTF8));
        action200->setText(QApplication::translate("Browser", "200%", 0, QApplication::UnicodeUTF8));
        action_100->setText(QApplication::translate("Browser", "-100%", 0, QApplication::UnicodeUTF8));
        action_101->setText(QApplication::translate("Browser", "+100%", 0, QApplication::UnicodeUTF8));
        action_50->setText(QApplication::translate("Browser", "-10%", 0, QApplication::UnicodeUTF8));
        action_51->setText(QApplication::translate("Browser", "+10%", 0, QApplication::UnicodeUTF8));
        action_52->setText(QApplication::translate("Browser", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        action_56->setText(QApplication::translate("Browser", "\320\241\321\202\320\270\320\273\321\214", 0, QApplication::UnicodeUTF8));
        action_57->setText(QApplication::translate("Browser", "\320\232\320\276\320\264\320\270\321\200\320\276\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        action_59->setText(QApplication::translate("Browser", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \320\272\320\276\320\264", 0, QApplication::UnicodeUTF8));
        action_61->setText(QApplication::translate("Browser", "\320\234\320\260\320\273\320\265\320\275\321\214\320\272\320\270\320\271 \321\215\320\272\321\200\320\260\320\275", 0, QApplication::UnicodeUTF8));
        action_62->setText(QApplication::translate("Browser", "\320\237\320\276\320\264\320\276\320\263\320\275\320\260\321\202\321\214 \320\277\320\276 \321\210\320\270\321\200\320\270\320\275\320\265", 0, QApplication::UnicodeUTF8));
        action_63->setText(QApplication::translate("Browser", "\320\222\320\276 \320\262\320\265\321\201\321\214 \321\215\320\272\321\200\320\260\320\275", 0, QApplication::UnicodeUTF8));
        action_64->setText(QApplication::translate("Browser", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\272\320\273\320\260\320\264\320\272\321\203 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\321\213...", 0, QApplication::UnicodeUTF8));
        action_65->setText(QApplication::translate("Browser", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\272\320\273\320\260\320\264\320\272\320\260\320\274\320\270...", 0, QApplication::UnicodeUTF8));
        action_67->setText(QApplication::translate("Browser", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\270\320\264\320\266\320\265\321\202\321\213", 0, QApplication::UnicodeUTF8));
        action_68->setText(QApplication::translate("Browser", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\270\320\264\320\266\320\265\321\202\320\260\320\274\320\270", 0, QApplication::UnicodeUTF8));
        action_69->setText(QApplication::translate("Browser", "\320\227\320\260\320\274\320\265\321\202\320\272\320\270", 0, QApplication::UnicodeUTF8));
        action_70->setText(QApplication::translate("Browser", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\270", 0, QApplication::UnicodeUTF8));
        action_71->setText(QApplication::translate("Browser", "\320\230\321\201\321\202\320\276\321\200\320\270\320\270 ", 0, QApplication::UnicodeUTF8));
        action_72->setText(QApplication::translate("Browser", "\320\241\321\201\321\213\320\273\320\272\320\270", 0, QApplication::UnicodeUTF8));
        action_73->setText(QApplication::translate("Browser", "\320\237\320\276\320\274\320\276\321\211\321\214", 0, QApplication::UnicodeUTF8));
        action_75->setText(QApplication::translate("Browser", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Browser", "open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("Browser", "save", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("Browser", "close", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("Browser", "back", 0, QApplication::UnicodeUTF8));
        actionForward->setText(QApplication::translate("Browser", "forward", 0, QApplication::UnicodeUTF8));
        actionReload->setText(QApplication::translate("Browser", "reload", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("Browser", "stop", 0, QApplication::UnicodeUTF8));
        actionTray->setText(QApplication::translate("Browser", "save", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("Browser", "About...", 0, QApplication::UnicodeUTF8));
        actionAbout_QT->setText(QApplication::translate("Browser", "About QT", 0, QApplication::UnicodeUTF8));
        actionOpen_2->setText(QApplication::translate("Browser", "Open", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        lineEdit->setText(QApplication::translate("Browser", "http://www.bash.org.ru", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QString());
        progressBar->setFormat(QApplication::translate("Browser", "%p%", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("Browser", "menu", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("Browser", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Browser: public Ui_Browser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_H
