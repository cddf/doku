#include "mitarbeiter.h"


Mitarbeiter::Mitarbeiter(QString ID)
  : Person(ID)
{
}

Mitarbeiter::Mitarbeiter(QString vorname, QString nachname, QDate geburtsdatum)
  : Person(vorname, nachname, geburtsdatum)
{
}
