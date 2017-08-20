#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <ctime>


class Person
{
public:
  /*
   * @param vorname Vorname
   * @param nachname Nachname
   */
  Person(std::string vorname, std::string nachname);
  ~Person();

  void getVorname();
  void getNachname();

private:
  std::string _vorname;
  std::string _nachname;

};

#endif // PERSON_H
