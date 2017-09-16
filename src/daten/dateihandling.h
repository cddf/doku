#ifndef DATEIHANDLING_H
#define DATEIHANDLING_H

#include <vector>
#include <iostream>
#include <QString>
//#include "pugixml.hpp"
#include <QFile>
#include <QDir>
#include <QtXmlPatterns>

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
  enum class kategorie
  {
    klient,
    mitarbeiter,
    doku,
    ihp
  };

  /*
   * Konstruktor für Personen
   */
  DateiHandling(const QString ID, const kategorie k);


  /*
   * Personen
   */
  QString ladeFeldPerson(const QString feld);

  void speichereFeldPerson(const QString feld);

  /*
   * Dokumentation
   */

  /*
   * Hilfepläne
   */


private:
  QString _pfadDaten = "../testdaten"; // TODO Pfad aus config
  QString _ID;
  QString _verzeichnis;
  QString _root;
  kategorie _kat;
  QXmlQuery _query;
};

#endif // DATEIHANDLING_H
