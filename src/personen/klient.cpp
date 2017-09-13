#include "klient.h"
#include "person.h"
#include <string>


Klient::Klient(QString ID)
  : Person(ID)
{
}

Klient::Klient(QString vorname, QString nachname, QDate geburtsdatum)
  : Person(vorname, nachname, geburtsdatum)
{
}
