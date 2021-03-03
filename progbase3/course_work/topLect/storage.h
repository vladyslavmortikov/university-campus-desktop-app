#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <QSqlDatabase>

#include "optional.h"
#include "lection.h"
#include "topic.h"
#include "user.h"

using namespace std;

class Storage
{
    User user;
public:
    virtual ~Storage() {}  // UPD (8.5.2019): added
    virtual bool open() = 0;
    virtual bool close() = 0;

    // lections
    virtual vector<Lection> getAllLections(void) = 0;
    virtual vector<Lection> getCourseLections(int course_id) = 0;
    virtual optional<Lection> getLectionByCourseId(int course_id) = 0;
    virtual bool updateLection(const Lection &lection) = 0;
    virtual bool removeLection(int lection_id) = 0;
    virtual int insertLection(const Lection &lection) = 0;
    // topics
    virtual vector<Topic> getAllTopics(void) = 0;
    virtual optional<Topic> getTopicById(int topic_id) = 0;
    virtual bool updateTopic(const Topic &topic) = 0;
    virtual bool removeTopic(int topic_id) = 0;
    virtual int insertTopic(const Topic &topic) = 0;
    // users
    virtual optional<User> userEditFunct(User user, string & password) = 0;
    virtual optional<User> getUserAuth(string & username, string & password) = 0;
    virtual optional<User> registerUser(string & username, string & password, string & fullname, int course) = 0;
    virtual optional<User> getUser(int user_id) = 0;
    virtual User getUserFromQuery(const QSqlQuery & query) = 0;
    // links
    virtual vector<Topic> getAllLectionTopics(int lection_id) = 0;
    virtual bool insertLectionTopic(int lection_id, int topic_id) = 0;
    virtual bool removeLectionTopic(int lection_id, int topic_id) = 0;
};
