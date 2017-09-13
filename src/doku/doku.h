#ifndef DOKU_H
#define DOKU_H

#include <vector>
#include <QString>
#include <QDateTime>

#include "modul.h"
#include "personen/person.h"
#include "personen/mitarbeiter.h"
#include "personen/klient.h"

using namespace std;

class Doku : public Modul
{
public:
  Doku(const Klient &k, const Mitarbeiter &m);

  struct revision {
    QString kommentar;
    QTime zeitpunkt;
    Mitarbeiter mitarbeiter;
    QDateTime timestamp;
    bool aktiv;
  };

  struct eintrag {
    vector<revision> revisionen;
  };

  void neuerEintrag (QString kommentar, QTime zeitpunkt);
  void neueRevision (QString kommentar, QTime zeitpunkt, eintrag &eintr);

  //const vector<einrag> &getEintraege();

private:
  vector<eintrag> _eintraege;
  Klient _klient;
  Mitarbeiter _mitarbeiter;

  void dokuLaden();
  void dokuSpeichern();
};




// TODO wesentliche Frage: in welchem Umfang sollen Einträge geändert oder gelöscht werden können?
// Antwort: Nur vom selben Mitarbeiter und nur mit einer Ablaufzeit von x Stunden. Vielleicht 48 Stunden oder einer Woche für z.B. Ergänzungen.
// Und die Änderungen müssen nachvollziehbar sein (z.B. wie hier in GitHub).


#endif // DOKU_H
