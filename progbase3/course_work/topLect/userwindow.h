#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include "regwindow.h"

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserWindow(QWidget *parent = 0);
    ~UserWindow();

signals:
    void ex();
    void editUserNow(User user, SQLiteStorage * storage);
    void toLections(User user, SQLiteStorage * storage);

private slots:
    void logToUser(User user,SQLiteStorage * storage);

//    void fromEditToUser(User user,SQLiteStorage * storage);

    void on_exit_clicked();

    void on_editInfo_clicked();

    void on_meLections_clicked();

    void on_exit_2_clicked();

private:
    User user_;
    Ui::UserWindow *ui;
    SQLiteStorage * storage_;
};

#endif // USERWINDOW_H
