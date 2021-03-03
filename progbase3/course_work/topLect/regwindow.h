#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QMessageBox>
#include <user.h>
#include <loginwindow.h>

namespace Ui {
class RegWindow;
}

class RegWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegWindow(QWidget *parent = 0);
    ~RegWindow();

signals:
    void toLog();
    void ex();

private slots:

    void on_Exit_clicked();

    void fromLog(SQLiteStorage * storage);

    void on_Register_clicked();

private:
    User user_;
    Ui::RegWindow *ui;
    SQLiteStorage * storage_ = nullptr;
};

#endif // REGWINDOW_H
