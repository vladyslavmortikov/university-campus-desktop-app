#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <QFileDialog>
#include <QMessageBox>
#include "adddialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("../image/MainWindow.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y);
    setDefault();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fromUserToLections(User user, SQLiteStorage * storage){
    storageMain = storage;
    mainUser = user;
    fillListWithCourseId(mainUser.id);
    this->show();
}

//void MainWindow::on_pushButton_clicked()
//{
//    addDialog addialog_(storageMain,this);
//    addialog_.setWindowTitle("creating new entity");
//    int status=addialog_.exec();
//    fillListWithCourseId(mainUser.id);
//}

void MainWindow::fillListWithCourseId(int id){
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    for (Lection lec : storageMain->getCourseLections(id)){
        QVariant qVariant;
        qVariant.setValue(lec);
        QListWidgetItem *qLectionListItem = new QListWidgetItem();
        qLectionListItem->setText(QString::fromStdString(lec.title));
        qLectionListItem->setData(Qt::UserRole, qVariant);
        ui->listWidget->addItem(qLectionListItem);

    }
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QVariant var = item->data(Qt::UserRole);
    Lection lec =var.value<Lection>();
    ui->listWidget_2->clear();

    for (Topic top : storageMain->getAllLectionTopics(lec.id)){
        QVariant qVariant;
        qVariant.setValue(top);
        QListWidgetItem *qTopicListItem = new QListWidgetItem();
        qTopicListItem->setText(QString::fromStdString(top.topic));
        qTopicListItem->setData(Qt::UserRole, qVariant);
        ui->listWidget_2->addItem(qTopicListItem);
    }
    ui->label_2->setText(QString::fromStdString(lec.title));
    ui->label_6->setText(QString::fromStdString(lec.lectorer));
    ui->label_4->setText(QString::number(lec.course_id));
    enableEditing();
}



void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(
                this,
                "On delete",
                "Are you sure?",
                QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QList <QListWidgetItem *>items=ui->listWidget->selectedItems();
        QListWidgetItem * selectedItem=items.at(0);
        QVariant var = selectedItem->data(Qt::UserRole);
        Lection lec =var.value<Lection>();
        storageMain->removeLection(lec.id);
        fillListWithCourseId(mainUser.id);
        setDefault();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QList <QListWidgetItem *>items=ui->listWidget->selectedItems();
    QListWidgetItem * selectedItem=items.at(0);
    QVariant var = selectedItem->data(Qt::UserRole);
    Lection lec =var.value<Lection>();
    addDialog addialog_(storageMain,lec.id,this);
    addialog_.setWindowTitle("Edit Lection");
    addialog_.exec();

    disableEditing();

    fillListWithCourseId(mainUser.id);
}

void MainWindow::setDefault(){
    if (storageMain==nullptr){
        disableEditing();
    }
    else{
        ui->pushButton->setEnabled(true );
        QList <QListWidgetItem *>items=ui->listWidget->selectedItems();
        if (items.size()<1){
            disableEditing();
        }
    }
}


void MainWindow::disableEditing(){
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->data->setVisible(false);
    ui->topic->setVisible(false);
    ui->materials->setVisible(false);
}
void MainWindow::enableEditing(){
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->label_6->setVisible(true);
    ui->label_7->setVisible(true);
    ui->data->setVisible(true);
    ui->topic->setVisible(true);
    ui->materials->setVisible(true);
}

void MainWindow::getStorageAndUserInfo(SQLiteStorage *storage){
    storageMain = storage;
    this->show();
}


void MainWindow::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    QVariant var = item->data(Qt::UserRole);
    Topic top =var.value<Topic>();
    ui->data->setText(QString::fromStdString(top.data));
    ui->topic->setText(QString::fromStdString(top.topic));
    ui->materials->setText(QString::fromStdString(top.materials));
    enableEditing();
}
void MainWindow::on_exit_clicked()
{
    emit ex();
    delete storageMain;
    this->close();
}
