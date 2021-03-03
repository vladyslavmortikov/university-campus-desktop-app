#ifndef HASHPASSWORD_H
#define HASHPASSWORD_H

#include <QCryptographicHash>
#include <QDebug>

QString hashPassword(QString const & pass) {
   QByteArray pass_ba = pass.toUtf8();
   QByteArray hash_ba = QCryptographicHash::hash(pass_ba, QCryptographicHash::Md5);
   QString pass_hash = QString(hash_ba.toHex());
   return pass_hash;
}


#endif // HASHPASSWORD_H
