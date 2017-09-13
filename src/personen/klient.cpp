#include "klient.h"
#include "person.h"
#include <string>
#include <iostream>


Klient::Klient(QString ID)
  : Person(ID)
{
  ladeKlient();
}

Klient::Klient(QString vorname, QString nachname, QDate geburtsdatum)
  : Person(vorname, nachname, geburtsdatum)
{
}

Klient::~Klient()
{
}

void Klient::ladeKlient()
{
  DateiHandling d;
  _vorname = d.ladeFeldKlient(_ID,"vorname");
  _nachname = d.ladeFeldKlient(_ID,"nachname");
  _geburtsdatum = QDate::fromString(
         d.ladeFeldKlient(_ID,"geburtsdatum"),"yyyy-MM-dd");

  _adresse1.zeile2 = d.ladeFeldKlient(_ID,"adresse/zeile2");
  _adresse1.strasse = d.ladeFeldKlient(_ID,"adresse/strasse");
  _adresse1.plz = d.ladeFeldKlient(_ID,"adresse/plz").toUShort();
  _adresse1.ort = d.ladeFeldKlient(_ID,"adresse/ort");
  _adresse1.land = d.ladeFeldKlient(_ID,"adresse/land");
  _adresse1.kommentar = d.ladeFeldKlient(_ID,"adresse/kommentar");
}
