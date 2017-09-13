#ifndef DOKU_H
#define DOKU_H

#include <string>
#include <time.h>
#include <vector>
#include "modul.h"
#include "personen/person.h"
#include "personen/mitarbeiter.h"
#include "personen/klient.h"

using namespace std;

class Doku : public Modul
{
public:
  //Doku(Klient k, Mitarbeiter m);
  Doku();

  void newEintrag (string kommentar);

private:
  struct eintrag {
    //ctime zeit; // TODO Datentyp?
    Mitarbeiter mitarbeiter;
    string kommentar;
    time_t timestamp;
    // TODO Revisionen integrieren
  };

  vector<eintrag> _eintraege; // dynamisch erweiterbares Array der Einträge
  Klient _klient;
  Mitarbeiter _mitarbeiter;

  void dokuLaden();
  void dokuSpeichern();
};

// TODO wesentliche Frage: in welchem Umfang sollen Einträge geändert oder gelöscht werden können?
// Antwort: Nur vom selben Mitarbeiter und nur mit einer Ablaufzeit von x Stunden. Vielleicht 48 Stunden oder einer Woche für z.B. Ergänzungen.
// Und die Änderungen müssen nachvollziehbar sein (z.B. wie hier in GitHub).


#endif // DOKU_H
