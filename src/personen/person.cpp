#include "person.h"


Person::Person(int id, std::string vorname, std::string nachname)
  : _id(id),_vorname(vorname), _nachname(nachname)
{
}

Person::~Person()
{
}
