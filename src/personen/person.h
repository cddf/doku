#ifndef PERSON_H
#define PERSON_H

#include <QDate>
#include <QString>

#include "dateihandling.h"

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


  ~Person();

  /*
   * Getter
   */
  const QString getID();
  const QString getVorname();
  const QString getNachname();
  const adresse getAdresse1();


  /*
   * Setter
   */
  void setVorname(QString vorname);
  void setNachname(QString nachname);
  void setAdresse1(adresse adresse);


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
};


#endif // PERSON_H
