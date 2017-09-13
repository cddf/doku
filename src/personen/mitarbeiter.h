#ifndef MITARBEITER_H
#define MITARBEITER_H

#include <QDate>
#include <QString>

#include "person.h"

class Mitarbeiter : public Person
{
public:
  Mitarbeiter(QString ID);
  Mitarbeiter(QString vorname, QString nachname, QDate geburtsdatum);

};

#endif // MITARBEITER_H
