/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalir;
    QAction *actionEscaneo_de_Puertos;
    QAction *actionDesconectar;
    QAction *actionConectar;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *speedScreen2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_4;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QLCDNumber *IRScreen1;
    QLineEdit *lineEdit_5;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit;
    QLCDNumber *IRScreen2;
    QLineEdit *lineEdit_7;
    QTextEdit *textEdit_2;
    QLCDNumber *distanceScreen;
    QLCDNumber *speedScreen1;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_2;
    QDial *dialPower2;
    QPushButton *pushButton_2;
    QPushButton *servoButton;
    QPushButton *powerButton;
    QPushButton *pushButton;
    QLCDNumber *lcdPower1;
    QLCDNumber *lcdAngulo;
    QLCDNumber *lcdPower2;
    QDial *dialServo;
    QDial *dialPower1;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *botonAlive;
    QPushButton *botonAll;
    QLineEdit *aliveEdit;
    QFrame *frame;
    QWidget *Radarwidget;
    QWidget *Speedwidget;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuComunicaci_n;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(860, 675);
        MainWindow->setMinimumSize(QSize(860, 675));
        MainWindow->setMaximumSize(QSize(860, 675));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionEscaneo_de_Puertos = new QAction(MainWindow);
        actionEscaneo_de_Puertos->setObjectName(QString::fromUtf8("actionEscaneo_de_Puertos"));
        actionDesconectar = new QAction(MainWindow);
        actionDesconectar->setObjectName(QString::fromUtf8("actionDesconectar"));
        actionConectar = new QAction(MainWindow);
        actionConectar->setObjectName(QString::fromUtf8("actionConectar"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 210, 451, 215));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        speedScreen2 = new QLCDNumber(layoutWidget);
        speedScreen2->setObjectName(QString::fromUtf8("speedScreen2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(speedScreen2->sizePolicy().hasHeightForWidth());
        speedScreen2->setSizePolicy(sizePolicy);
        speedScreen2->setMinimumSize(QSize(100, 30));
        speedScreen2->setLayoutDirection(Qt::LeftToRight);
        speedScreen2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        speedScreen2->setFrameShape(QFrame::NoFrame);
        speedScreen2->setFrameShadow(QFrame::Plain);
        speedScreen2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(speedScreen2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_3, 0, 2, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(50, 16777215));
        lineEdit_6->setFont(font);
        lineEdit_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_6, 3, 2, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(50, 16777215));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_4->setReadOnly(true);

        gridLayout->addWidget(lineEdit_4, 1, 2, 1, 1);

        textEdit_4 = new QTextEdit(layoutWidget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_4->sizePolicy().hasHeightForWidth());
        textEdit_4->setSizePolicy(sizePolicy1);
        textEdit_4->setMinimumSize(QSize(100, 30));
        textEdit_4->setMaximumSize(QSize(16777215, 16777215));
        textEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textEdit_4, 3, 0, 1, 1);

        textEdit_5 = new QTextEdit(layoutWidget);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        sizePolicy1.setHeightForWidth(textEdit_5->sizePolicy().hasHeightForWidth());
        textEdit_5->setSizePolicy(sizePolicy1);
        textEdit_5->setMinimumSize(QSize(100, 30));
        textEdit_5->setMaximumSize(QSize(16777215, 16777215));
        textEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textEdit_5, 4, 0, 1, 1);

        IRScreen1 = new QLCDNumber(layoutWidget);
        IRScreen1->setObjectName(QString::fromUtf8("IRScreen1"));
        sizePolicy.setHeightForWidth(IRScreen1->sizePolicy().hasHeightForWidth());
        IRScreen1->setSizePolicy(sizePolicy);
        IRScreen1->setMinimumSize(QSize(100, 30));
        IRScreen1->setLayoutDirection(Qt::LeftToRight);
        IRScreen1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        IRScreen1->setFrameShape(QFrame::NoFrame);
        IRScreen1->setFrameShadow(QFrame::Plain);
        IRScreen1->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(IRScreen1, 3, 1, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(50, 16777215));
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_5->setReadOnly(true);

        gridLayout->addWidget(lineEdit_5, 2, 2, 1, 1);

        textEdit_3 = new QTextEdit(layoutWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        sizePolicy1.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy1);
        textEdit_3->setMinimumSize(QSize(100, 30));
        textEdit_3->setMaximumSize(QSize(16777215, 16777215));
        textEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textEdit_3, 2, 0, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(100, 30));
        textEdit->setMaximumSize(QSize(16777215, 16777215));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        IRScreen2 = new QLCDNumber(layoutWidget);
        IRScreen2->setObjectName(QString::fromUtf8("IRScreen2"));
        sizePolicy.setHeightForWidth(IRScreen2->sizePolicy().hasHeightForWidth());
        IRScreen2->setSizePolicy(sizePolicy);
        IRScreen2->setMinimumSize(QSize(100, 30));
        IRScreen2->setLayoutDirection(Qt::LeftToRight);
        IRScreen2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        IRScreen2->setFrameShape(QFrame::NoFrame);
        IRScreen2->setFrameShadow(QFrame::Plain);
        IRScreen2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(IRScreen2, 4, 1, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMaximumSize(QSize(50, 16777215));
        lineEdit_7->setFont(font);
        lineEdit_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_7->setReadOnly(true);

        gridLayout->addWidget(lineEdit_7, 4, 2, 1, 1);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);
        textEdit_2->setMinimumSize(QSize(100, 30));
        textEdit_2->setMaximumSize(QSize(16777215, 16777215));
        textEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textEdit_2, 1, 0, 1, 1);

        distanceScreen = new QLCDNumber(layoutWidget);
        distanceScreen->setObjectName(QString::fromUtf8("distanceScreen"));
        sizePolicy.setHeightForWidth(distanceScreen->sizePolicy().hasHeightForWidth());
        distanceScreen->setSizePolicy(sizePolicy);
        distanceScreen->setMinimumSize(QSize(100, 30));
        distanceScreen->setLayoutDirection(Qt::LeftToRight);
        distanceScreen->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        distanceScreen->setFrameShape(QFrame::NoFrame);
        distanceScreen->setFrameShadow(QFrame::Plain);
        distanceScreen->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(distanceScreen, 2, 1, 1, 1);

        speedScreen1 = new QLCDNumber(layoutWidget);
        speedScreen1->setObjectName(QString::fromUtf8("speedScreen1"));
        sizePolicy.setHeightForWidth(speedScreen1->sizePolicy().hasHeightForWidth());
        speedScreen1->setSizePolicy(sizePolicy);
        speedScreen1->setMinimumSize(QSize(100, 30));
        speedScreen1->setLayoutDirection(Qt::LeftToRight);
        speedScreen1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        speedScreen1->setFrameShape(QFrame::NoFrame);
        speedScreen1->setFrameShadow(QFrame::Plain);
        speedScreen1->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(speedScreen1, 0, 1, 1, 1);

        gridLayout->setRowStretch(0, 5);
        gridLayout->setColumnStretch(0, 5);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, 5, 531, 201));
        groupBox->setFlat(false);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 110, 191, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);
        dialPower2 = new QDial(groupBox);
        dialPower2->setObjectName(QString::fromUtf8("dialPower2"));
        dialPower2->setGeometry(QRect(310, 50, 61, 61));
        dialPower2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        dialPower2->setMinimum(-1000);
        dialPower2->setMaximum(1000);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 100, 131, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        pushButton_2->setFlat(false);
        servoButton = new QPushButton(groupBox);
        servoButton->setObjectName(QString::fromUtf8("servoButton"));
        servoButton->setGeometry(QRect(20, 20, 131, 31));
        servoButton->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        servoButton->setFlat(false);
        powerButton = new QPushButton(groupBox);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(180, 20, 191, 31));
        powerButton->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        powerButton->setFlat(false);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 60, 131, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        pushButton->setFlat(false);
        lcdPower1 = new QLCDNumber(groupBox);
        lcdPower1->setObjectName(QString::fromUtf8("lcdPower1"));
        lcdPower1->setGeometry(QRect(250, 55, 60, 20));
        lcdPower1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lcdPower1->setFrameShape(QFrame::NoFrame);
        lcdPower1->setFrameShadow(QFrame::Plain);
        lcdPower1->setLineWidth(0);
        lcdPower1->setDigitCount(4);
        lcdPower1->setSegmentStyle(QLCDNumber::Flat);
        lcdAngulo = new QLCDNumber(groupBox);
        lcdAngulo->setObjectName(QString::fromUtf8("lcdAngulo"));
        lcdAngulo->setGeometry(QRect(90, 70, 60, 20));
        lcdAngulo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lcdAngulo->setFrameShape(QFrame::NoFrame);
        lcdAngulo->setFrameShadow(QFrame::Plain);
        lcdAngulo->setLineWidth(0);
        lcdAngulo->setDigitCount(4);
        lcdAngulo->setSegmentStyle(QLCDNumber::Flat);
        lcdPower2 = new QLCDNumber(groupBox);
        lcdPower2->setObjectName(QString::fromUtf8("lcdPower2"));
        lcdPower2->setGeometry(QRect(250, 85, 60, 20));
        lcdPower2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lcdPower2->setFrameShape(QFrame::NoFrame);
        lcdPower2->setFrameShadow(QFrame::Plain);
        lcdPower2->setLineWidth(0);
        lcdPower2->setDigitCount(4);
        lcdPower2->setSegmentStyle(QLCDNumber::Flat);
        dialServo = new QDial(groupBox);
        dialServo->setObjectName(QString::fromUtf8("dialServo"));
        dialServo->setGeometry(QRect(20, 50, 61, 61));
        dialServo->setStyleSheet(QString::fromUtf8("QDial{\n"
"	background-color: rgb(255, 255, 0);\n"
"}"));
        dialServo->setMinimum(-90);
        dialServo->setMaximum(90);
        dialPower1 = new QDial(groupBox);
        dialPower1->setObjectName(QString::fromUtf8("dialPower1"));
        dialPower1->setGeometry(QRect(180, 50, 61, 61));
        dialPower1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        dialPower1->setMinimum(-1000);
        dialPower1->setMaximum(1000);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 110, 131, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Black"));
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStyleStrategy(QFont::PreferDefault);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 20, 131, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        pushButton_3->setFlat(false);
        botonAlive = new QPushButton(groupBox);
        botonAlive->setObjectName(QString::fromUtf8("botonAlive"));
        botonAlive->setGeometry(QRect(20, 150, 131, 31));
        botonAlive->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        botonAlive->setFlat(false);
        botonAll = new QPushButton(groupBox);
        botonAll->setObjectName(QString::fromUtf8("botonAll"));
        botonAll->setGeometry(QRect(390, 150, 131, 31));
        botonAll->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        botonAll->setFlat(false);
        aliveEdit = new QLineEdit(groupBox);
        aliveEdit->setObjectName(QString::fromUtf8("aliveEdit"));
        aliveEdit->setGeometry(QRect(180, 150, 191, 31));
        aliveEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 5, 304, 618));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	\n"
"	background-color: rgb(255, 255, 0);\n"
"	border: 1px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Radarwidget = new QWidget(frame);
        Radarwidget->setObjectName(QString::fromUtf8("Radarwidget"));
        Radarwidget->setGeometry(QRect(2, 305, 300, 311));
        Radarwidget->setFocusPolicy(Qt::NoFocus);
        Radarwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
""));
        Speedwidget = new QWidget(frame);
        Speedwidget->setObjectName(QString::fromUtf8("Speedwidget"));
        Speedwidget->setGeometry(QRect(2, 2, 300, 300));
        Speedwidget->setFocusPolicy(Qt::NoFocus);
        Speedwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(770, 210, 60, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_4 {\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 0, 0);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 30px;\n"
"	border-color: rgb(0, 0, 0);\n"
"    font: bold 14px;\n"
"\n"
"}\n"
"QPushButton#pushButton_4:pressed {\n"
"	background-color: rgb(166, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 17));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar {    \n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(76,74,72);\n"
"    spacing: 0px; /* spacing between menu bar items */\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 1px 4px;\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"    background: #757575;\n"
"}"));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuMenu->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(117, 117, 117);\n"
"color: rgb(255, 255, 255);"));
        menuComunicaci_n = new QMenu(menuMenu);
        menuComunicaci_n->setObjectName(QString::fromUtf8("menuComunicaci_n"));
        menuComunicaci_n->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(117, 117, 117);\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuComunicaci_n->menuAction());
        menuMenu->addAction(actionSalir);
        menuComunicaci_n->addAction(actionEscaneo_de_Puertos);
        menuComunicaci_n->addAction(actionDesconectar);
        menuComunicaci_n->addAction(actionConectar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Comunicaci\303\263n entre PC - Mbed", nullptr));
        actionSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        actionEscaneo_de_Puertos->setText(QCoreApplication::translate("MainWindow", "Escaneo de Puertos", nullptr));
        actionDesconectar->setText(QCoreApplication::translate("MainWindow", "Desconectar", nullptr));
#if QT_CONFIG(tooltip)
        actionDesconectar->setToolTip(QCoreApplication::translate("MainWindow", "Desconectar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConectar->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "PPS", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "uS", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "PPS", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">IR1</span></p></body></html>", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">IR2</span></p></body></html>", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "CM", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">DISTANCE</span></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">SPEED M1</span></p></body></html>", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "uS", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">SPEED M2</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "MOTOR IZQ         MOTOR DER", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "GET DISTANCE", nullptr));
        servoButton->setText(QCoreApplication::translate("MainWindow", "SET SERVO", nullptr));
        powerButton->setText(QCoreApplication::translate("MainWindow", "SET POWER", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "GET SPEED", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "ANGULO SERVO", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "GET IR", nullptr));
        botonAlive->setText(QCoreApplication::translate("MainWindow", "ALIVE", nullptr));
        botonAll->setText(QCoreApplication::translate("MainWindow", "GET ALL", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuComunicaci_n->setTitle(QCoreApplication::translate("MainWindow", "Comunicaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
