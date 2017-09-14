#ifndef KLIENT_H
#define KLIENT_H

#include <QDate>
#include <QString>

#include "person.h"

class Klient : public Person
{
public:
  Klient(QString ID);
  Klient(QString vorname, QString nachname, QDate geburtsdatum);

  ~Klient();

  void ladeKlient();
  void speichereKlient();
};

#endif // KLIENT_H
