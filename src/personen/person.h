#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <ctime>


class Person
{
public:
  struct adresse {
    std::string strasse;
    int plz;
    std::string ort;
    std::string zeile2;
    std::string land;
    std::string kommentar;
  };



  /*
   * @param vorname Vorname
   * @param nachname Nachname
   */
  Person(int id, std::string vorname, std::string nachname);
  ~Person();


  void getVorname();
  void getNachname();

private:
  int _id;
  std::string _vorname;
  std::string _nachname;
  //date _geburtsdatum; //TODO Welcher Datentyp ist geeignet

  adresse _adresse1;

};

#endif // PERSON_H
