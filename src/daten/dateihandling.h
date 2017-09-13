#ifndef DATEIHANDLING_H
#define DATEIHANDLING_H

#include <vector>
#include <iostream>
#include <QString>
//#include "pugixml.hpp"
#include <QFile>
#include <QDir>

/*
#include "personen/person.h"
#include "personen/mitarbeiter.h"
#include "personen/klient.h"
#include "doku/doku.h"
*/



// TODO flock() lässt sich unter Linux für Locks anwenden.
// Vielleicht reichen auch .lock-Dateien mit Signatur.
// Oder doch eine Objektdatenbank

// TODO Programmkonfiguration. Zentral und lokal.


class DateiHandling
{
public:
  DateiHandling();


  /*
   * Personen
   */
  QString ladeFeldKlient(QString ID, QString feld);
  QString ladeFeldMitarbeiter(QString ID, QString feld);

  /*
   * Dokumentation
   */

  /*
   * Hilfepläne
   */


private:
  QString ladeFeldPerson(QString person, QString ID, QString feld);
  QString _pfadDaten = "../testdaten";

};

#endif // DATEIHANDLING_H
