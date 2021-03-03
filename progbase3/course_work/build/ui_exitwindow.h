/********************************************************************************
** Form generated from reading UI file 'exitwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITWINDOW_H
#define UI_EXITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExitWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExitWindow)
    {
        if (ExitWindow->objectName().isEmpty())
            ExitWindow->setObjectName(QStringLiteral("ExitWindow"));
        ExitWindow->resize(600, 400);
        ExitWindow->setMinimumSize(QSize(600, 400));
        ExitWindow->setMaximumSize(QSize(600, 400));
        centralwidget = new QWidget(ExitWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 250, 311, 71));
        QFont font;
        font.setFamily(QStringLiteral("Purisa"));
        font.setPointSize(25);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 290, 401, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Purisa"));
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setAutoFillBackground(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 10, 89, 25));
        pushButton->setFlat(true);
        ExitWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExitWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        ExitWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ExitWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ExitWindow->setStatusBar(statusbar);

        retranslateUi(ExitWindow);

        QMetaObject::connectSlotsByName(ExitWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ExitWindow)
    {
        ExitWindow->setWindowTitle(QApplication::translate("ExitWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("ExitWindow", "TopLec.v.0.1", Q_NULLPTR));
        label_2->setText(QApplication::translate("ExitWindow", "\302\2512019 Vladyslav Mortikov & E.please", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ExitWindow", "close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExitWindow: public Ui_ExitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITWINDOW_H
