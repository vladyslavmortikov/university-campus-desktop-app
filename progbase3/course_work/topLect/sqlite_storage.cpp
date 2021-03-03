#include "sqlite_storage.h"
#include <QtSql>
#include <QDebug>
#include <QMessageBox>
#include "hashpassword.h"

optional<User> SQLiteStorage::userEditFunct(User user, string & password){

    QSqlQuery query;

    QString passwordHash = hashPassword(QString::fromStdString(password));
    query.prepare("INSERT INTO users (username, password_hash, fullname, status, course, photo) VALUES (:username, :password_hash, :fullname, :status, :course, :photo) WHERE id = :id");
    query.bindValue(":id", user.id);
    query.bindValue(":username", QString::fromStdString(user.username));
    query.bindValue(":photo", QString::fromStdString(user.photo));
    query.bindValue(":course", user.course);
    query.bindValue(":fullname", QString::fromStdString(user.fullname));
    query.bindValue(":status", user.status);
    query.bindValue(":password_hash", passwordHash);
    if (!query.exec()){
        qDebug() << "upd user error:"
                 << query.lastError();
        return nullopt;
    }

    return user;
}

optional<User> SQLiteStorage::registerUser(string & username, string & password, string & fullname, int course)
{
    QString passwordHash = hashPassword(QString::fromStdString(password));

    QSqlQuery query;

    string photo = "../image/userImages/default-user.png";
    query.prepare("INSERT INTO users (username, password_hash, fullname, status, course, photo) VALUES (:username,:password_hash, :fullname, :status, :course, :photo)");
    query.bindValue(":username", QString::fromStdString(username));
    query.bindValue(":password_hash", passwordHash);
    query.bindValue(":course", course);
    query.bindValue(":fullname", QString::fromStdString(fullname));
    query.bindValue(":status", 0);
    query.bindValue(":photo", QString::fromStdString(photo));
    if (!query.exec()){
        qDebug() << "reg user error:"
                 << query.lastError();
        return nullopt;
    }

    User user;
    int course_id = query.lastInsertId().toInt();
    optional<User> user_op = getUser(course_id);
    if(user_op)
    {
        user = user_op.value();
        return user;
    }
    else
    {
        return nullopt;
    }

}

User SQLiteStorage::getUserFromQuery(const QSqlQuery & query)
{
    int id = query.value("id").toInt();
    string username = query.value("username").toString().toStdString();
    int status = query.value("status").toInt();
    string password_hash = query.value("password_hash").toString().toStdString();
    string fullname = query.value("fullname").toString().toStdString();
    string photo = query.value("photo").toString().toStdString();
    User user;
    user.id = id;
    user.fullname = fullname;
    user.status = status;
    user.username = username;
    user.photo = photo;
    return user;
}

optional<User> SQLiteStorage::getUser(int course_id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE id = :id");
    query.bindValue(":id", course_id);
    if (!query.exec()) // do exec if query is prepared SELECT query
    {
        qDebug() << "get users error:" << query.lastError();
    }
    if (query.next())
    {
        User user = getUserFromQuery(query);
        return user;
    }
    else
    {
        return nullopt;
    }
}

vector<Lection> SQLiteStorage::getCourseLections(int course_id){
    vector <Lection> lections;
    QSqlQuery query;
    query.prepare("SELECT * FROM lections WHERE course_id=:course_id");
    query.bindValue(":course_id",course_id);
    if (!query.exec()) {
        qDebug() << "getLections error:" << query.lastError();
        return lections;
    }
    while (query.next())
    {
        Lection lec;
        lec.id=query.value("id").toInt();
        lec.title = query.value("title").toString().toStdString();
        lec.lectorer=query.value("lectorer").toString().toStdString();
        lec.course_id=query.value("course_id").toInt();
        lections.push_back(lec);
    }
    return lections;
}

vector<Topic> SQLiteStorage::getAllLectionTopics(int lection_id) {
    vector<Topic> topics;
    QSqlQuery query;
    query.prepare("SELECT * FROM links WHERE lection_id=:lection_id");
    query.bindValue(":lection_id",lection_id);
    if (!query.exec()) {
        qDebug() << "getTopics error:" << query.lastError();
        return topics;
    }
    while (query.next()){
        topics.push_back(getTopicById(query.value("topic_id").toInt()).value());
    }
    return topics;
}

bool SQLiteStorage::insertLectionTopic(int lection_id, int topic_id) {
    QSqlQuery query;
    query.prepare("INSERT INTO links (lection_id,topic_id) VALUES (:lection_id,:topic_id)");
    query.bindValue(":lection_id",lection_id);
    query.bindValue(":topic_id",topic_id);
    if (!query.exec()){
        qDebug()<<"qquery error"
               <<query.lastError();
        return false;
    }
    return true;
}

bool SQLiteStorage::removeLectionTopic(int lection_id, int topic_id) {
    QSqlQuery query;
    query.prepare("DELETE FROM links WHERE lection_id = :lection_id AND topic_id=:topic_id");
    query.bindValue(":lection_id",lection_id);
    query.bindValue(":topic_id",topic_id);
    if (!query.exec())
        qDebug()<<"no such";
    return false;
    if (!query.numRowsAffected()){
        qDebug()<<"no such link";
        return false;

    }
    return true;
}

SQLiteStorage::SQLiteStorage(const string & dir_name) : dir_name_(dir_name){
    db=QSqlDatabase::addDatabase("QSQLITE");
}

SQLiteStorage::~SQLiteStorage() {
}

bool SQLiteStorage::open(){

    QString path = QString::fromStdString(dir_name_) + "/data.sqlite";
    db.setDatabaseName(path);
    bool connected = db.open();  // open db connection
    if (!connected) {
        db.close();
        return false;
    }
    QSqlQuery query(db);
    query.prepare("PRAGMA foreign_keys = ON");
    qDebug() << "opened";
    return true;
}

bool SQLiteStorage::close(){
    db.close();
    return true;
}

optional<User> SQLiteStorage::getUserAuth(string & username, string & password)
{
    QString passwordHash = hashPassword(QString::fromStdString(password));

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND password_hash = :password_hash");
    query.bindValue(":username", QString::fromStdString(username));
    query.bindValue(":password_hash", passwordHash);
    if (!query.exec()){
        qDebug() << "get user auth error:"
                 << query.lastError();
        return nullopt;
    }
    if(query.next())
    {
        User user;
        user.id = query.value("id").toInt();
        user.username = query.value("username").toString().toStdString();
        //        user.(query.value("password_hash").toString().toStdString());
        user.fullname = query.value("fullname").toString().toStdString();
        user.course = query.value("course").toInt();
        user.status = query.value("status").toInt();
        user.photo = query.value("photo").toString().toStdString();
        return user;
    }
    return nullopt;
}

vector<Lection> SQLiteStorage::getAllLections(void)
{
    vector<Lection> lections;
    QSqlQuery query("SELECT * FROM lections");

    if (!query.exec()) {
        qDebug() << "getAlllections error:" << query.lastError().text();
    }

    while (query.next())
    {
        Lection newLection;
        newLection.id = query.value("id").toInt();
        newLection.title = query.value("title").toString().toStdString();
        newLection.lectorer = query.value("lectorer").toString().toStdString();
        newLection.course_id = query.value("course_id").toInt();

        lections.push_back(newLection);
    }
    return lections;
}

optional<Lection> SQLiteStorage::getLectionByCourseId(int course_id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM lections WHERE course_id = :course_id");
    query.bindValue(":course_id", course_id);
    if (!query.exec())
    {
        qDebug() << "getLections error:" << query.lastError();
        return nullopt;
    }
    if (query.next())
    {
        Lection newLection;
        newLection.id = query.value("id").toInt();
        newLection.title = query.value("title").toString().toStdString();
        newLection.lectorer = query.value("lectorer").toString().toStdString();
        newLection.course_id = query.value("course_id").toInt();
        return newLection;
    }
    else
    {
        return nullopt;
    }
}

bool SQLiteStorage::updateLection(const Lection &lection)
{
    QSqlQuery query;
    query.prepare("UPDATE lections SET title = :title, lectorer = :lectorer, course_id = :course_id WHERE id = :id");
    query.bindValue(":title", QString::fromStdString(lection.title));
    query.bindValue(":lectorer", QString::fromStdString(lection.lectorer));
    query.bindValue(":course_id", lection.course_id);
    query.bindValue(":id", lection.id);

    if (!query.exec()){
        qDebug() << "updateLection error:" << query.lastError();
        return false;
    }

    return true;
}

bool SQLiteStorage::removeLection(int lection_id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM lection WHERE id = :id");
    query.bindValue(":id", lection_id);

    if (!query.exec()){
        qDebug() << "removeLection error:" << query.lastError();
        return false;
    }

    if(query.numRowsAffected() == 0)
    {
        return false;
    }

    return true;
}

int SQLiteStorage::insertLection(const Lection &lection)
{
    QSqlQuery query;
    query.prepare("INSERT INTO lections (title, lectorer, course_id)"
                  "VALUES (:title, :lectorer, :course_id");
    query.bindValue(":title", QString::fromStdString(lection.title));
    query.bindValue(":lectorer", QString::fromStdString(lection.lectorer));
    query.bindValue(":course_id", this->user.course);

    if (!query.exec()){
        qDebug() << "insertLection error:" << query.lastError();
        return 0;
    }
    QVariant var = query.lastInsertId();
    return var.toInt();
}

vector<Topic> SQLiteStorage::getAllTopics(void)
{
    vector<Topic> topics;
    QSqlQuery query("SELECT * FROM topics");

    if (!query.exec()) {
        qDebug() << "getAllTopics error:" << query.lastError().text();
    }

    while (query.next())
    {
        Topic newTopic;
        newTopic.id = query.value("id").toInt();
        newTopic.data = query.value("data").toString().toStdString();
        newTopic.topic = query.value("topic").toString().toStdString();
        newTopic.materials = query.value("materials").toInt();
        topics.push_back(newTopic);
    }
    return topics;
}

optional<Topic> SQLiteStorage::getTopicById(int topic_id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM topics WHERE id = :id");
    query.bindValue(":id", topic_id);
    if (!query.exec())
    {
        qDebug() << "getTopicById error:" << query.lastError();
        return nullopt;
    }
    if (query.next())
    {
        Topic newTopic;
        newTopic.id = query.value("id").toInt();
        newTopic.data = query.value("data").toString().toStdString();
        newTopic.topic = query.value("topic").toString().toStdString();
        newTopic.materials = query.value("materials").toInt();
        return newTopic;
    }
    else
    {
        return nullopt;
    }
}

bool SQLiteStorage::updateTopic(const Topic &topic)
{
    QSqlQuery query;
    query.prepare("UPDATE topics SET data = :data, topic = :topic, materials = :materials WHERE id = :id");
    query.bindValue(":data", QString::fromStdString(topic.data));
    query.bindValue(":topic", QString::fromStdString(topic.topic));
    query.bindValue(":materials", QString::fromStdString(topic.materials));
    query.bindValue(":id", topic.id);

    if (!query.exec()){
        qDebug() << "updateTopic error:" << query.lastError();
        return false;
    }

    return true;
}

bool SQLiteStorage::removeTopic(int topic_id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM topics WHERE id = :id");
    query.bindValue(":id", topic_id);
    if (!query.exec()){
        qDebug() << "removeTopic error:" << query.lastError();
        return false;
    }
    if(query.numRowsAffected() == 0)
    {
        return false;
    }
    return true;
}

int SQLiteStorage::insertTopic(const Topic &topic)
{
    QSqlQuery query;
    query.prepare("INSERT INTO topics (topic, materials, data) VALUES (:topic, :materials, :data)");
    query.bindValue(":data", QString::fromStdString(topic.data));
    query.bindValue(":topic", QString::fromStdString(topic.topic));
    query.bindValue(":materials", QString::fromStdString(topic.materials));
    if (!query.exec()){
        qDebug() << "insertTopic error:" << query.lastError();
        return 0;
    }
    QVariant var = query.lastInsertId();
    return var.toInt();
}
