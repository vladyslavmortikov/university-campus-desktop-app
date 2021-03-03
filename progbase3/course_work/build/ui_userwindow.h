/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *editInfo;
    QPushButton *exit;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *USERNAME;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *fullname;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *courseNum;
    QLabel *status;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *study;
    QLabel *label_3;
    QLabel *label_13;
    QPushButton *meLections;
    QLabel *label_pic;
    QPushButton *exit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QStringLiteral("UserWindow"));
        UserWindow->resize(600, 400);
        UserWindow->setMinimumSize(QSize(600, 400));
        UserWindow->setMaximumSize(QSize(600, 400));
        centralwidget = new QWidget(UserWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 41, 17));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Sans Narrow"));
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 211, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Liberation Sans Narrow"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        editInfo = new QPushButton(centralwidget);
        editInfo->setObjectName(QStringLiteral("editInfo"));
        editInfo->setGeometry(QRect(400, 260, 71, 31));
        QFont font2;
        font2.setPointSize(9);
        editInfo->setFont(font2);
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(520, 20, 71, 41));
        exit->setFont(font2);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(200, 70, 291, 181));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 250, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font3;
        font3.setFamily(QStringLiteral("Liberation Sans"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_6->setFont(font3);

        horizontalLayout_2->addWidget(label_6);

        USERNAME = new QLabel(layoutWidget);
        USERNAME->setObjectName(QStringLiteral("USERNAME"));
        QFont font4;
        font4.setFamily(QStringLiteral("Liberation Sans Narrow"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        USERNAME->setFont(font4);

        horizontalLayout_2->addWidget(USERNAME);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 250, 21));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);

        horizontalLayout_3->addWidget(label_8);

        fullname = new QLabel(layoutWidget_2);
        fullname->setObjectName(QStringLiteral("fullname"));
        fullname->setFont(font4);

        horizontalLayout_3->addWidget(fullname);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 110, 260, 21));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        courseNum = new QLabel(layoutWidget_4);
        courseNum->setObjectName(QStringLiteral("courseNum"));
        courseNum->setFont(font3);

        horizontalLayout_5->addWidget(courseNum);

        status = new QLabel(groupBox);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(220, -10, 71, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Liberation Sans Narrow"));
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        status->setFont(font5);
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 90, 236, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        study = new QLabel(layoutWidget1);
        study->setObjectName(QStringLiteral("study"));
        study->setFont(font3);

        horizontalLayout->addWidget(study);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        horizontalLayout->addWidget(label_3);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 130, 126, 19));
        label_13->setFont(font4);
        meLections = new QPushButton(centralwidget);
        meLections->setObjectName(QStringLiteral("meLections"));
        meLections->setGeometry(QRect(520, 210, 71, 41));
        meLections->setFont(font2);
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(40, 70, 141, 181));
        exit_2 = new QPushButton(centralwidget);
        exit_2->setObjectName(QStringLiteral("exit_2"));
        exit_2->setGeometry(QRect(520, 160, 71, 41));
        exit_2->setFont(font2);
        UserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        UserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserWindow->setStatusBar(statusbar);

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("UserWindow", "Hello,", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserWindow", "User FullName", Q_NULLPTR));
        editInfo->setText(QApplication::translate("UserWindow", "Edit", Q_NULLPTR));
        exit->setText(QApplication::translate("UserWindow", "Exit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UserWindow", "About Me", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserWindow", "Username", Q_NULLPTR));
        USERNAME->setText(QApplication::translate("UserWindow", "NTUU \"IHOR SIKORSKY KPI\"", Q_NULLPTR));
        label_8->setText(QApplication::translate("UserWindow", "Fullname", Q_NULLPTR));
        fullname->setText(QApplication::translate("UserWindow", "NTUU \"IHOR SIKORSKY KPI\"", Q_NULLPTR));
        courseNum->setText(QApplication::translate("UserWindow", "CourseNumth", Q_NULLPTR));
        status->setText(QApplication::translate("UserWindow", "STATUS", Q_NULLPTR));
        study->setText(QApplication::translate("UserWindow", "Study at", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserWindow", "NTUU \"IHOR SIKORSKY KPI\"", Q_NULLPTR));
        label_13->setText(QApplication::translate("UserWindow", "Course", Q_NULLPTR));
        meLections->setText(QApplication::translate("UserWindow", "My Lections", Q_NULLPTR));
        label_pic->setText(QApplication::translate("UserWindow", "TextLabel", Q_NULLPTR));
        exit_2->setText(QApplication::translate("UserWindow", "All Users", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
