/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionmenu2;
    QAction *actionOpen_storage;
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *label_7;
    QListWidget *listWidget;
    QLabel *label_8;
    QPushButton *pushButton_4;
    QPushButton *exit;
    QPushButton *exit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget_2;
    QLabel *label_10;
    QPushButton *pushButton_7;
    QLabel *label_11;
    QPushButton *pushButton_8;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *data;
    QLabel *topic;
    QLabel *materials;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *datalabel_8;
    QLabel *label_14;
    QLabel *label_12;
    QSplitter *splitter;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QPushButton *pushButton_6;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        actionmenu2 = new QAction(MainWindow);
        actionmenu2->setObjectName(QStringLiteral("actionmenu2"));
        actionOpen_storage = new QAction(MainWindow);
        actionOpen_storage->setObjectName(QStringLiteral("actionOpen_storage"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 70, 111, 17));
        label_7->setFrameShape(QFrame::NoFrame);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(50, 30, 171, 201));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 10, 141, 17));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Sans Narrow"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setFrameShape(QFrame::NoFrame);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(720, 30, 61, 31));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(520, 210, 71, 41));
        QFont font1;
        font1.setPointSize(9);
        exit->setFont(font1);
        exit_2 = new QPushButton(centralWidget);
        exit_2->setObjectName(QStringLiteral("exit_2"));
        exit_2->setGeometry(QRect(520, 160, 71, 41));
        exit_2->setFont(font1);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 10, 71, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(520, 60, 71, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(520, 110, 71, 41));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(250, 30, 241, 201));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 10, 171, 16));
        label_10->setFont(font);
        label_10->setFrameShape(QFrame::NoFrame);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(381, 240, 53, 25));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(340, 240, 37, 25));
        QFont font2;
        font2.setFamily(QStringLiteral("Liberation Sans Narrow"));
        font2.setItalic(true);
        label_11->setFont(font2);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(283, 240, 53, 25));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 250, 231, 91));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 20, 151, 71));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 20, 76, 71));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QFont font3;
        font3.setFamily(QStringLiteral("Liberation Sans Narrow"));
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label->setFont(font3);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 250, 241, 91));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 20, 161, 71));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        data = new QLabel(layoutWidget);
        data->setObjectName(QStringLiteral("data"));
        data->setFont(font);

        verticalLayout_4->addWidget(data);

        topic = new QLabel(layoutWidget);
        topic->setObjectName(QStringLiteral("topic"));
        topic->setFont(font);

        verticalLayout_4->addWidget(topic);

        materials = new QLabel(layoutWidget);
        materials->setObjectName(QStringLiteral("materials"));
        materials->setFont(font);

        verticalLayout_4->addWidget(materials);

        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 20, 72, 71));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        datalabel_8 = new QLabel(widget2);
        datalabel_8->setObjectName(QStringLiteral("datalabel_8"));
        datalabel_8->setEnabled(true);
        datalabel_8->setFont(font3);
        datalabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(datalabel_8);

        label_14 = new QLabel(widget2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font2);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_14);

        label_12 = new QLabel(widget2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_12);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(60, 240, 151, 25));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_5 = new QPushButton(splitter);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        splitter->addWidget(pushButton_5);
        label_9 = new QLabel(splitter);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);
        splitter->addWidget(label_9);
        pushButton_6 = new QPushButton(splitter);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        splitter->addWidget(pushButton_6);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionmenu2->setText(QApplication::translate("MainWindow", "menu2", Q_NULLPTR));
        actionOpen_storage->setText(QApplication::translate("MainWindow", "User page", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOpen_storage->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "Courses of Lections", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "User", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        exit_2->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Edit CL ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Add CL", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Rem CL", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Details about lections", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", ">>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "PAGE", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "<<", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "temp", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "temp", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "temp", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TITLE", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "LECTORER", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "COURSE", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        data->setText(QString());
        topic->setText(QString());
        materials->setText(QString());
        datalabel_8->setText(QApplication::translate("MainWindow", "DATA", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "TOPIC", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "MATERIALS", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "<<", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "PAGE", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", ">>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
