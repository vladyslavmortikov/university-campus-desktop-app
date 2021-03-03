#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QDebug"
#include <QFileDialog>
#include <QMessageBox>


LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y);
    QPixmap bkgnd("../image/LoginWindow.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    if(storage_!=nullptr)
        delete(SQLiteStorage*)storage_;
    storage_ = new SQLiteStorage("../topLect/data/sql");
    if(storage_ != nullptr){
        storage_->open();
    } else {
        QMessageBox::critical(nullptr,QObject::tr("ERROR"), QObject::tr("Out of memory"), QMessageBox::Cancel);
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
    delete storage_;
}

void LoginWindow::on_toRegister_clicked()
{
    emit reg(storage_);
    this->close();
}

void LoginWindow::fromRegToLog(SQLiteStorage * storage){
    storage_ = storage;
    this->show();
}


void LoginWindow::on_SignIn_clicked()
{
    User user_;
    string login = ui->username->text().toStdString();
    string password = ui->password->text().toStdString();
    optional <User> user_login = storage_->getUserAuth(login,password);

    if(user_login){
        user_ = user_login.value();
//        storage_->setUser(*(storage_->getUserAuth(login,password)));
//        qDebug() << user_.fullname.c_str() << "lox" << user_.photo.c_str();
        emit main(user_,storage_);
        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
            le->clear();
        }
        this->close();
    }else {
        QMessageBox::warning(this,"Autorithation error","Re-write your login or password");
        ui->password->clear();
        return;
    }

}

void LoginWindow::on_Exit_clicked()
{
    emit ex();
    delete storage_;
    this->close();
}

