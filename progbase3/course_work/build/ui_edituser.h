/********************************************************************************
** Form generated from reading UI file 'edituser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSER_H
#define UI_EDITUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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

class Ui_editUser
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *forAdmin1;
    QPushButton *pushButton_2;
    QLabel *label_pic;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *fullname;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *con_password;
    QWidget *widget1;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *forAdmin2;
    QSpinBox *course;
    QVBoxLayout *verticalLayout_4;
    QLabel *forAdmin3;
    QSpinBox *adminOrUser;
    QLabel *label_9;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *editUser)
    {
        if (editUser->objectName().isEmpty())
            editUser->setObjectName(QStringLiteral("editUser"));
        editUser->resize(600, 400);
        editUser->setMinimumSize(QSize(600, 400));
        editUser->setMaximumSize(QSize(600, 400));
        centralwidget = new QWidget(editUser);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 461, 281));
        forAdmin1 = new QLabel(groupBox);
        forAdmin1->setObjectName(QStringLiteral("forAdmin1"));
        forAdmin1->setEnabled(true);
        forAdmin1->setGeometry(QRect(180, 190, 141, 61));
        QFont font;
        font.setFamily(QStringLiteral("Purisa"));
        font.setPointSize(15);
        forAdmin1->setFont(font);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 220, 89, 25));
        label_pic = new QLabel(groupBox);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(20, 30, 141, 181));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 30, 271, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        fullname = new QLineEdit(widget);
        fullname->setObjectName(QStringLiteral("fullname"));

        verticalLayout_2->addWidget(fullname);

        username = new QLineEdit(widget);
        username->setObjectName(QStringLiteral("username"));

        verticalLayout_2->addWidget(username);

        password = new QLineEdit(widget);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password);

        con_password = new QLineEdit(widget);
        con_password->setObjectName(QStringLiteral("con_password"));
        con_password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(con_password);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(300, 190, 146, 53));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        forAdmin2 = new QLabel(widget1);
        forAdmin2->setObjectName(QStringLiteral("forAdmin2"));

        verticalLayout_3->addWidget(forAdmin2);

        course = new QSpinBox(widget1);
        course->setObjectName(QStringLiteral("course"));
        course->setMaximum(6);

        verticalLayout_3->addWidget(course);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        forAdmin3 = new QLabel(widget1);
        forAdmin3->setObjectName(QStringLiteral("forAdmin3"));

        verticalLayout_4->addWidget(forAdmin3);

        adminOrUser = new QSpinBox(widget1);
        adminOrUser->setObjectName(QStringLiteral("adminOrUser"));
        adminOrUser->setMaximum(1);

        verticalLayout_4->addWidget(adminOrUser);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_4);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 0, 261, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Purisa"));
        font1.setPointSize(18);
        label_9->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 320, 89, 25));
        editUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(editUser);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        editUser->setMenuBar(menubar);
        statusbar = new QStatusBar(editUser);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        editUser->setStatusBar(statusbar);

        retranslateUi(editUser);

        QMetaObject::connectSlotsByName(editUser);
    } // setupUi

    void retranslateUi(QMainWindow *editUser)
    {
        editUser->setWindowTitle(QApplication::translate("editUser", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        forAdmin1->setText(QApplication::translate("editUser", "For Admin", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("editUser", "New Photo", Q_NULLPTR));
        label_pic->setText(QApplication::translate("editUser", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("editUser", "Fullname", Q_NULLPTR));
        label_2->setText(QApplication::translate("editUser", "Username", Q_NULLPTR));
        label_3->setText(QApplication::translate("editUser", "Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("editUser", "Confirm password", Q_NULLPTR));
        forAdmin2->setText(QApplication::translate("editUser", "Course:", Q_NULLPTR));
        forAdmin3->setText(QApplication::translate("editUser", "Status:", Q_NULLPTR));
        label_9->setText(QApplication::translate("editUser", "Edit Information", Q_NULLPTR));
        pushButton->setText(QApplication::translate("editUser", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editUser: public Ui_editUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H
