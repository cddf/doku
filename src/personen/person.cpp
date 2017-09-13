#include "person.h"

#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>
#include <QDate>

Person::Person(QString ID)
  : _ID(ID)
{
}

Person::Person(QString vorname, QString nachname, QDate geburtsdatum)
  : _vorname(vorname),
    _nachname(nachname),
    _geburtsdatum(geburtsdatum)
{
  erstelleID();
}

Person::~Person()
{
}

void Person::erstelleID()
{
  unsigned short n = 6;
  unsigned short v = 3;

  if (_nachname.size() < n)
      n = _nachname.size();

  if (_vorname.size() < v)
      v = _vorname.size();

  _ID = _nachname.left(n).toLower() + _vorname.left(v).toLower() + _geburtsdatum.toString("yyyy");
}


/*
 * Getter
 */
const QString Person::getID()
{
  return _ID;
}
const QString Person::getVorname()
{
  return _vorname;
}
const QString Person::getNachname()
{
  return _nachname;
}
const Person::adresse Person::getAdresse1()
{
  return _adresse1;
}
