#ifndef EXITWINDOW_H
#define EXITWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>

namespace Ui {
class ExitWindow;
}

class ExitWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExitWindow(QWidget *parent = 0);
    ~ExitWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ExitWindow *ui;
};

#endif // EXITWINDOW_H
