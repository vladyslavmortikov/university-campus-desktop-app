#include "exitwindow.h"
#include "ui_exitwindow.h"

ExitWindow::ExitWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExitWindow)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
        int x = (screenGeometry.width() - width()) / 2;
        int y = (screenGeometry.height() - height()) / 2;
        move(x, y);
    QPixmap bkgnd("../image/ExitWindow.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    palette.setColor(ui->label->foregroundRole(), Qt::white);
    ui->label->setPalette(palette);
    palette.setColor(ui->label_2->foregroundRole(), Qt::white);
    ui->label_2->setPalette(palette);
}

ExitWindow::~ExitWindow()
{
    delete ui;
}

void ExitWindow::on_pushButton_clicked()
{
    exit(0);
}
