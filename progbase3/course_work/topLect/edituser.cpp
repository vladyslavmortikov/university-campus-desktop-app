#include "edituser.h"
#include "ui_edituser.h"
#include <QFileDialog>

editUser::editUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::editUser)
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

editUser::~editUser()
{
    delete ui;
}

//void editUser::toUser(User user, SQLiteStorage * storage){


//}

void editUser::fromUserToEdit(User user, SQLiteStorage * storage){
    storageEdit = storage;
    userEdit = user;
    ui->username->setText(QString::fromStdString(userEdit.username));
    ui->fullname->setText(QString::fromStdString(userEdit.fullname));
    if(userEdit.status == 0){
    ui->adminOrUser->setVisible(false);
    ui->course->setVisible(false);
    ui->forAdmin1->setVisible(false);
    ui->forAdmin2->setVisible(false);
    ui->forAdmin3->setVisible(false);
    }
    ui->adminOrUser->setValue(userEdit.status);
    ui->course->setValue(userEdit.course);
    QPixmap pic(userEdit.photo.c_str());
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    this->show();
}

void editUser::on_pushButton_clicked()
{
    bool change = false;
    QString fullname = ui->fullname->text();
    QString username = ui->username->text();
    QString password = ui->password->text();
    QString passwordCon = ui->con_password->text();

    if(fullname.size() != 0){
        change = true;
        userEdit.fullname = ui->fullname->text().toStdString();
    }else
        ui->fullname->setText(QString::fromStdString(userEdit.fullname));

    if(username.size() != 0){
        change = true;
        userEdit.username = ui->username->text().toStdString();
    }else
        ui->username->setText(QString::fromStdString(userEdit.username));

    if(password.size() != 0 && passwordCon != 0){
        if(password == passwordCon){
            change = true;
            password = ui->password->text();
            string passWORD = password.toStdString();
            storageEdit->userEditFunct(userEdit,passWORD);
        } else {
            change = false;
            QMessageBox::warning(this,"Registration error","Empty parol");
            ui->password->clear();
            ui->con_password->clear();
        }
    }

    this->close();

}

void editUser::on_pushButton_2_clicked()
{
    const QString folderPath = QFileDialog::getExistingDirectory(this, tr("Image folder"));
    if(!folderPath.isEmpty())
    {
        QDir dir(folderPath);
        QStringList filter;
        filter << QLatin1String("*.png");
        filter << QLatin1String("*.jpeg");
        filter << QLatin1String("*.jpg");
        dir.setNameFilters(filter);
        QFileInfoList filelistinfo = dir.entryInfoList();
        QStringList fileList;
        foreach (const QFileInfo &fileinfo, filelistinfo) {
            QString imageFile = fileinfo.absoluteFilePath();
            //imageFile is the image path, just put your load image code here
        }
    }

}

