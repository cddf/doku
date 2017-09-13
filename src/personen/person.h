#ifndef PERSON_H
#define PERSON_H

#include <QDate>
#include <QString>

//#include "daten/dateihandling.h"

using namespace std;

class Person
{
public:
  struct adresse {
    QString zeile2;
    QString strasse;
    ushort plz;
    QString ort;
    QString land;
    QString kommentar;
  };


  /*
   * Bekannte Person wird mit der ID referenziert und automatisch geladen.
   */
  Person(QString ID);

  /*
   * Neue Person wird erstellt und bekommt eine eindeutige ID zugewiesen.
   */
  Person(QString vorname, QString nachname, QDate geburtsdatum);

  Person();


  ~Person();

  /*
   * Getter
   */
  const QString getID();
  const QString getVorname();
  const QString getNachname();
  const adresse getAdresse1();


protected:
  QString _ID;
  QString _vorname;
  QString _nachname;
  QDate _geburtsdatum;
  adresse _adresse1;

  /*
   * Erstellt und speichert die ID der Person.
   *
   * TODO Eindeutigkeit überprüfen
   */
  void erstelleID();

  void ladePerson();
  void speicherePerson();
};


#endif // PERSON_H
