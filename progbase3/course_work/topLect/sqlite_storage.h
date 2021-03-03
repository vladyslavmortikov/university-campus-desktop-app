#include <QtSql>
#include "storage.h"
#include <QSqlDatabase>
#include <QSqlQuery>

class SQLiteStorage: public Storage
{
    QSqlDatabase db ;
    const string dir_name_;
    User user;

public:
    SQLiteStorage(const string & dir_name) ;
    ~SQLiteStorage();

    bool open();
    bool close();

    // lections
    vector<Lection> getAllLections(void);
    vector<Lection> getCourseLections(int course_id);
    optional<Lection> getLectionByCourseId(int course_id);
    bool updateLection(const Lection &lection);
    bool removeLection(int lection_id);
    int insertLection(const Lection &lection);

    // topics
    vector<Topic> getAllTopics(void);
    optional<Topic> getTopicById(int topic_id);
    bool updateTopic(const Topic &topic);
    bool removeTopic(int topic_id);
    int insertTopic(const Topic &topic);
    // users
    optional<User> userEditFunct(User user, string & password);
    optional<User> getUserAuth(string & username, string & password);
    optional<User> registerUser(string & username, string & password, string & fullname, int course);
    optional<User> getUser(int user_id);
    User getUserFromQuery(const QSqlQuery & query);
    // links
     vector<Topic> getAllLectionTopics(int lection_id) ;
    bool insertLectionTopic(int lection_id, int topic_id) ;
    bool removeLectionTopic(int lection_id, int topic_id) ;
};
