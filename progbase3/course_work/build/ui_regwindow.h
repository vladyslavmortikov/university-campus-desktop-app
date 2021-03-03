/********************************************************************************
** Form generated from reading UI file 'regwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *Register;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *password;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *con_password;
    QCheckBox *agree;
    QCheckBox *account;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *fullname;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *username;
    QLabel *label_9;
    QSpinBox *spinBox;
    QLineEdit *con_password_2;
    QLabel *label_7;
    QPushButton *Exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegWindow)
    {
        if (RegWindow->objectName().isEmpty())
            RegWindow->setObjectName(QStringLiteral("RegWindow"));
        RegWindow->resize(600, 400);
        RegWindow->setMinimumSize(QSize(600, 400));
        RegWindow->setMaximumSize(QSize(600, 400));
        centralwidget = new QWidget(RegWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 471, 291));
        Register = new QPushButton(groupBox);
        Register->setObjectName(QStringLiteral("Register"));
        Register->setEnabled(true);
        Register->setGeometry(QRect(360, 250, 101, 31));
        Register->setAutoDefault(false);
        Register->setFlat(false);
        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 130, 211, 51));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAutoFillBackground(false);

        verticalLayout_4->addWidget(label_5);

        password = new QLineEdit(layoutWidget_4);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(password);

        layoutWidget_5 = new QWidget(groupBox);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 190, 211, 51));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAutoFillBackground(false);

        verticalLayout_5->addWidget(label_6);

        con_password = new QLineEdit(layoutWidget_5);
        con_password->setObjectName(QStringLiteral("con_password"));
        con_password->setEchoMode(QLineEdit::Password);

        verticalLayout_5->addWidget(con_password);

        agree = new QCheckBox(groupBox);
        agree->setObjectName(QStringLiteral("agree"));
        agree->setGeometry(QRect(250, 140, 211, 23));
        agree->setChecked(false);
        agree->setAutoRepeat(false);
        agree->setAutoExclusive(false);
        account = new QCheckBox(groupBox);
        account->setObjectName(QStringLiteral("account"));
        account->setGeometry(QRect(250, 170, 211, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 190, 141, 17));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 51, 321, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAutoFillBackground(false);

        horizontalLayout->addWidget(label_8);

        fullname = new QLineEdit(layoutWidget);
        fullname->setObjectName(QStringLiteral("fullname"));

        horizontalLayout->addWidget(fullname);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 321, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(label_4);

        username = new QLineEdit(layoutWidget1);
        username->setObjectName(QStringLiteral("username"));

        horizontalLayout_2->addWidget(username);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 70, 48, 17));
        label_9->setAutoFillBackground(false);
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(361, 89, 91, 31));
        spinBox->setMinimum(1);
        spinBox->setMaximum(6);
        con_password_2 = new QLineEdit(groupBox);
        con_password_2->setObjectName(QStringLiteral("con_password_2"));
        con_password_2->setGeometry(QRect(140, 290, 209, 25));
        con_password_2->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 0, 311, 71));
        QFont font;
        font.setFamily(QStringLiteral("Purisa"));
        font.setPointSize(25);
        label_7->setFont(font);
        label_7->setAutoFillBackground(false);
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(540, 10, 51, 31));
        Exit->setAutoDefault(false);
        Exit->setFlat(false);
        RegWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        RegWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RegWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RegWindow->setStatusBar(statusbar);

        retranslateUi(RegWindow);

        Register->setDefault(true);
        Exit->setDefault(true);


        QMetaObject::connectSlotsByName(RegWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegWindow)
    {
        RegWindow->setWindowTitle(QApplication::translate("RegWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        Register->setText(QApplication::translate("RegWindow", "Register", Q_NULLPTR));
        label_5->setText(QApplication::translate("RegWindow", "New Password", Q_NULLPTR));
        password->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("RegWindow", "Confirm Password", Q_NULLPTR));
        con_password->setPlaceholderText(QString());
        agree->setText(QApplication::translate("RegWindow", "I argree to Terms of Service", Q_NULLPTR));
        account->setText(QApplication::translate("RegWindow", "TopLec may use my", Q_NULLPTR));
        label->setText(QApplication::translate("RegWindow", "account information", Q_NULLPTR));
        label_8->setText(QApplication::translate("RegWindow", "Fullname", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegWindow", "New Login", Q_NULLPTR));
        label_9->setText(QApplication::translate("RegWindow", "Course", Q_NULLPTR));
        con_password_2->setPlaceholderText(QString());
        label_7->setText(QApplication::translate("RegWindow", "  Registration", Q_NULLPTR));
        Exit->setText(QApplication::translate("RegWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegWindow: public Ui_RegWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
