#include "userwindow.h"
#include "ui_userwindow.h"
#include "user.h"
#include <QPixmap>

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y);

    QPixmap bkgnd("../image/UserWindow.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

UserWindow::~UserWindow()
{
    delete ui;
}


void UserWindow::logToUser(User user, SQLiteStorage * storage){
    storage_ = storage;
    user_ = user;
    ui->label_2->setText(user_.fullname.c_str());
    ui->USERNAME->setText(user_.username.c_str());
    ui->fullname->setText(user_.fullname.c_str());

    if(user_.status == 1){
        ui->courseNum->setText("Teacher");
        ui->status->setText("ADMIN");
        ui->study->setText("Work at");
        ui->label_13->clear();
    }

    if(user_.status == 0){
        ui->status->setText("STUDENT");

        if (user_.course == 1){
            ui->courseNum->setText("1st");
        } else if(user_.course == 2){
            ui->courseNum->setText("2nd");
        }else if (user_.course == 3){
            ui->courseNum->setText("3rd");
        } else
            ui->courseNum->setText(user_.course + "th");
    }

    QPixmap pic(user_.photo.c_str());
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));

    this->show();
}

void UserWindow::on_exit_clicked()
{
        emit ex();
        delete storage_;
        this->close();
}

void UserWindow::on_editInfo_clicked()
{
    emit editUserNow(user_, storage_);
}

void UserWindow::on_meLections_clicked()
{
    emit toLections(user_,storage_);
    this->close();
}

void UserWindow::on_exit_2_clicked()
{

}
