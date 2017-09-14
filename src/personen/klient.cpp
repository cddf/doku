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
  DateiHandling d(_ID, DateiHandling::kategorie::klient);
  _vorname = d.ladeFeldPerson("vorname");
  _nachname = d.ladeFeldPerson("nachname");
  _geburtsdatum = QDate::fromString(
         d.ladeFeldPerson("geburtsdatum"),"yyyy-MM-dd");

  _adresse1.zeile2 = d.ladeFeldPerson("adresse/zeile2");
  _adresse1.strasse = d.ladeFeldPerson("adresse/strasse");
  _adresse1.plz = d.ladeFeldPerson("adresse/plz").toUShort();
  _adresse1.ort = d.ladeFeldPerson("adresse/ort");
  _adresse1.land = d.ladeFeldPerson("adresse/land");
  _adresse1.kommentar = d.ladeFeldPerson("adresse/kommentar");
}

void Klient::speichereKlient()
{
}
