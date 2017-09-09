#ifndef DOKU_H
#define DOKU_H

#include <string>
#include <time.h>
#include <vector>
#include "modul.h"
#include "personen/person.h"
#include "personen/mitarbeiter.h"

using namespace std;

class Doku : public Modul
{
public:
  Doku();

  struct eintrag {
    //ctime zeit; // TODO Datentyp?
    Mitarbeiter mitarbeiter;
    string kommentar;
    time_t timestamp;
  };

  void newEintrag (eintrag &eintr);

private:
  vector<eintrag> _eintraege; // dynamisch erweiterbares Array der Einträge
};

// TODO wesentliche Frage: in welchem Umfang sollen Einträge geändert oder gelöscht werden können?


#endif // DOKU_H
