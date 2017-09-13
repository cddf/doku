#ifndef DATEIHANDLING_H
#define DATEIHANDLING_H

#include <vector>

#include "personen/person.h"
#include "personen/mitarbeiter.h"
#include "personen/klient.h"
#include "doku/doku.h"



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
  void personAnlegen(Person p);
  void personAendern(Person p);

  vector<Klient> KlientenLaden();
  vector<Mitarbeiter> MitarbeiterLaden();

  /*
   * Dokumentation
   */
  //vector<eintrag> dokuLaden(Klient k);
  //void dokuSpeichern(Klient k, vector<eintrag> d);


  /*
   * Hilfepläne
   */

};

#endif // DATEIHANDLING_H
