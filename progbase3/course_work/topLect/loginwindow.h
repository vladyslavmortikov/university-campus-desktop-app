#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <string>
#include <vector>
#include "sqlite_storage.h"
#include <QDesktopWidget>
#include <QMainWindow>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

signals:
    void reg(SQLiteStorage * storage);
    void main(User user, SQLiteStorage *storage);
    void ex();

private slots:
    void fromRegToLog(SQLiteStorage * storage);
    void on_toRegister_clicked();
    void on_SignIn_clicked();
    void on_Exit_clicked();

private:
    Ui::LoginWindow *ui;
    SQLiteStorage * storage_ = nullptr;
};

#endif // LOGINWINDOW_H
