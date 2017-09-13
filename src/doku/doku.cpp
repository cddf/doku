#include "doku.h"

#include "personen/person.h"
#include "personen/mitarbeiter.h"
#include "personen/klient.h"

Doku::Doku(const Klient &k, const Mitarbeiter &m)
  : _klient(k), _mitarbeiter(m)
{

}

void Doku::neuerEintrag(QString kommentar, QTime zeitpunkt)
{
  eintrag eintr;
  neueRevision(kommentar, zeitpunkt, eintr);
  _eintraege.push_back(eintr);
}

void Doku::neueRevision(QString kommentar, QTime zeitpunkt, Doku::eintrag &eintr)
{
  revision rev
  {
    kommentar,
    zeitpunkt,
    _mitarbeiter,
    QDateTime::currentDateTime(),
    true
  };
  eintr.revisionen.push_back(rev);
}

