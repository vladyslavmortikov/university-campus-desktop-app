#pragma once
#include "mainwindow.h"
#include "loginwindow.h"
#include "regwindow.h"
#include "exitwindow.h"
#include "edituser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginWindow l;
    RegWindow r;
    ExitWindow e;
    UserWindow u;
    editUser ed;

    //fromLogin
    QObject::connect(&l, SIGNAL(reg(SQLiteStorage*)), &r, SLOT(fromLog(SQLiteStorage *)));
    QObject::connect(&l, SIGNAL(main(User,SQLiteStorage*)),&u, SLOT(logToUser(User,SQLiteStorage*)));

    //fromReg
    QObject::connect(&r, SIGNAL(toLog()), &l, SLOT(show()));
    QObject::connect(&r, SIGNAL(ex()), &e, SLOT(show()));

    //fromUser
    QObject::connect(&u, SIGNAL(ex()), &e, SLOT(show()));
    QObject::connect(&u, SIGNAL(editUserNow(User,SQLiteStorage*)), &ed, SLOT(fromUserToEdit(User,SQLiteStorage*)));
    QObject::connect(&u, SIGNAL(toLections(User,SQLiteStorage*)), &w, SLOT(fromUserToLections(User,SQLiteStorage*)));

    //fromMain
    QObject::connect(&w, SIGNAL(ex()), &e, SLOT(show()));

    // exit
    e.setWindowTitle("TopLec Exit");
    QObject::connect(&l, SIGNAL(ex()), &e, SLOT(show()));

    //titles
    w.setWindowTitle("TopLect Main");
    l.setWindowTitle("TopLect App");
    r.setWindowTitle("TopLect Registration");
    u.setWindowTitle("TopLect User");
    l.show();

    return a.exec();
}
