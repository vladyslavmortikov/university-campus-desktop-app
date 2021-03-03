#pragma once
#include <string>
#include <QVariant>
using std::string;

typedef struct 
{
    int id;
    string topic;
    string data;
    string materials;
}Topic;

Q_DECLARE_METATYPE(Topic);
