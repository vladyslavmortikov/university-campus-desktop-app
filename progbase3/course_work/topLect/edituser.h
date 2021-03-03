#ifndef EDITUSER_H
#define EDITUSER_H

#include <QMainWindow>
#include <userwindow.h>
#include <user.h>

namespace Ui {
class editUser;
}

class editUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit editUser(QWidget *parent = 0);
    ~editUser();

signals:
//    void toUser(User user, SQLiteStorage * storage);

private slots:
    void on_pushButton_2_clicked();
    void fromUserToEdit(User user, SQLiteStorage * storage);
    void on_pushButton_clicked();

private:
    Ui::editUser *ui;
    SQLiteStorage * storageEdit = nullptr;
    User userEdit;
};

#endif // EDITUSER_H
