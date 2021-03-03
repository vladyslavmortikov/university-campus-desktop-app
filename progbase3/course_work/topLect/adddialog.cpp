#include "adddialog.h"
#include "ui_adddialog.h"

addDialog::addDialog(Storage* storage_,int cou_id,QWidget *parent):
    QDialog(parent),
    ui(new Ui::addDialog)
{

    ui->setupUi(this);

    this->storage_=storage_;
    this->course_id=cou_id;
    this->cou_id=&course_id;
    Lection lec=storage_->getLectionByCourseId(cou_id).value();
    ui->label->setText("Editing...");
    ui->lineEdit->setText(QString::fromStdString(lec.title));
    ui->lineEdit_2->setText(QString::fromStdString(lec.lectorer));
    ui->spinBox_2->setValue(lec.course_id);
    fillListsForEditedMainEntity(cou_id);
}

addDialog::addDialog(Storage* storage_,QWidget *parent ):
    QDialog(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);
    this->storage_=storage_;
    fillListsForNewMainEntity();
    ////
}

addDialog::~addDialog()
{
    delete ui;
}

Lection addDialog::data(){
    Lection lec;
    lec.title=ui->lineEdit->text().toStdString();
    lec.lectorer=ui->lineEdit_2->text().toStdString();
    lec.course_id=ui->spinBox_2->value();
    return lec;
}

void addDialog::fillListsForNewMainEntity(){
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    for (Topic top : storage_->getAllTopics()){
        QVariant qVariant;
        qVariant.setValue(top);
        QListWidgetItem *qLectionListItem = new QListWidgetItem();
        qLectionListItem->setText(QString::fromStdString(top.topic));
        qLectionListItem->setData(Qt::UserRole, qVariant);
        ui->listWidget_2->addItem(qLectionListItem);
    }
}
void addDialog::fillListsForEditedMainEntity(int cou_id){
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    for (Topic top : storage_->getAllTopics()){
        QVariant qVariant;
        qVariant.setValue(top);
        QListWidgetItem *qLectionListItem = new QListWidgetItem();
        qLectionListItem->setText(QString::fromStdString(top.topic));
        qLectionListItem->setData(Qt::UserRole, qVariant);
        for (Topic top1 : storage_->getAllLectionTopics(cou_id)){
            if (top.id==top1.id){
                ui->listWidget->addItem(qLectionListItem);
                continue;
            }
        }
        ui->listWidget_2->addItem(qLectionListItem);
    }
}

void addDialog::on_buttonBox_accepted()
{
    qDebug()<<"we are here";
    if(cou_id != nullptr){
        Lection lec;
        lec.id=*cou_id;
        lec.title=ui->lineEdit->text().toStdString();
        lec.lectorer=ui->lineEdit_2->text().toStdString();
        lec.course_id=ui->spinBox_2->value();
        qDebug()<<*(cou_id);
        storage_->updateLection(lec);
        foreach(Topic top,storage_->getAllLectionTopics(*cou_id)){
            qDebug()<<*cou_id<<top.id;
            storage_->removeLectionTopic(*cou_id,top.id);
        }
        for(int i = 0; i < ui->listWidget->count(); ++i)
        {
            QListWidgetItem* item = ui->listWidget->item(i);
            QVariant var = item->data(Qt::UserRole);
            Topic top =var.value<Topic>();
            storage_->insertLectionTopic(*cou_id,top.id);
        }
    }else {
        Lection lec;
        lec.title=ui->lineEdit->text().toStdString();
        lec.lectorer=ui->lineEdit_2->text().toStdString();
        lec.course_id=ui->spinBox_2->value();
        int newcou_id=storage_->insertLection(lec);
    }
}

void addDialog::on_pushButton_2_clicked()
{
    QList <QListWidgetItem *>items=ui->listWidget_2->selectedItems();
    foreach(QListWidgetItem* item, items){
        ui->listWidget->addItem(ui->listWidget_2->takeItem(ui->listWidget_2->row(item)));
    }
}

void addDialog::on_pushButton_clicked()
{
    QList <QListWidgetItem *>items=ui->listWidget->selectedItems();
    foreach(QListWidgetItem* item, items){
        ui->listWidget_2->addItem(ui->listWidget->takeItem(ui->listWidget->row(item)));
    }
}
