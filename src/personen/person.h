#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <ctime>

#include "dateihandling.h"
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

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



  /*
   *  Serialisierung des Objekts für Boost
   */
  friend class boost::serialization::access;
  // When the class Archive corresponds to an output archive, the
  // & operator is defined similar to <<. Likewise, when the class Archive
  // is a type of input archive the & operator is defined similar to >>.
  template<class Archive>
  void serialize(Archive & ar, const unsigned int version)
  {
    ar & _vorname;
    ar & _nachname;
    ar & _adresse1;
  }

};

#endif // PERSON_H
