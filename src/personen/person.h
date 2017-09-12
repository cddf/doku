#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <ctime>

#include "dateihandling.h"

using namespace std;

class Person
{
public:
  struct adresse {
    string zeile2;
    string strasse;
    ushort plz;
    string ort;
    string land;
    string kommentar;
  };



  /*
   * @param id ID
   * @param vorname Vorname
   * @param nachname Nachname
   */
  Person(string id, string vorname, string nachname);
  ~Person();

  /*
   * Getter
   */
  string getId();
  string getVorname();
  string getNachname();
  adresse getAdresse1();


  /*
   * Setter
   */
  void setId(string id);
  void setVorname(string vorname);
  void setNachname(string nachname);
  void setAdresse1(adresse adresse1);


private:
  string _id;
  string _vorname;
  string _nachname;
  //date _geburtsdatum; //TODO Welcher Datentyp ist geeignet
  adresse _adresse1;




#endif // PERSON_H
