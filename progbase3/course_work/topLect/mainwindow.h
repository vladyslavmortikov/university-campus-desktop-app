#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loginwindow.h"
#include <QListWidget>
#include <QDesktopWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void ex();


private slots:
    void fromUserToLections(User user, SQLiteStorage * storage);


    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void getStorageAndUserInfo(SQLiteStorage * storage);
    //    void on_listWidget_2_clicked(const QModelIndex &index);

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_exit_clicked();

private:
    User mainUser;
    Ui::MainWindow *ui;
    SQLiteStorage * storageMain =nullptr;
    void enableEditing();
    void disableEditing();
    void fillListWithCourseId(int course_id);
    void setDefault();
};

#endif // MAINWINDOW_H
