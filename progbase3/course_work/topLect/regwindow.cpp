#include "regwindow.h"
#include "ui_regwindow.h"

RegWindow::RegWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegWindow)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y);
    QPixmap bkgnd("../image/RegWindow.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

}

RegWindow::~RegWindow()
{
    delete ui;
}

void RegWindow::on_Exit_clicked()
{
    emit ex();
    delete storage_;
    this->close();
}

void RegWindow::fromLog(SQLiteStorage * storage){
    storage_ = storage;
    this->show();
}

void RegWindow::on_Register_clicked()
{
    if(ui->password->text() != ui->con_password->text())
    {
        QMessageBox::warning(this,"Registration error","Passwords do not match");
        ui->password->clear();
        ui->con_password->clear();
        return;
    } else if(ui->password->text().isEmpty() || ui->username->text().isEmpty())
    {
        QMessageBox::warning(this,"Registration error","Empty data");
        ui->password->clear();
        ui->con_password->clear();
        return;
    } else if(ui->password->text().size() < 8)
    {
        QMessageBox::warning(this,"Registration error","Password must include more than 7 symbols");
        ui->password->clear();
        ui->con_password->clear();
        return;
    } else if(!(ui->account->isChecked() && ui->agree->isChecked())){
        QMessageBox::warning(this,"Registration error","Please, agree to the terms!");
    } else
    {
        string fullname = ui->fullname->text().toStdString();
        string username = ui->username->text().toStdString();
        string password = ui->password->text().toStdString();
        int course = ui->spinBox->value();

        optional <User> user_reg = storage_->registerUser(username,password,fullname,course);
        if(user_reg == nullopt){
            QMessageBox::warning(this,"Registration error","Please, choose another username!");
            ui->username->clear();
        } else{
            user_ = user_reg.value();
            qDebug() << user_.fullname.c_str();
            QMessageBox::information(this, "Greetings!", "Succesfull registration!", "Continue");

            emit toLog();
            storage_ = nullptr;

            this->close();}

        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
            le->clear();
        }

        foreach(QCheckBox* ch, findChildren<QCheckBox*>()) {
            ch->setChecked(false);
        }

    }
}
