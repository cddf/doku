#ifndef MITARBEITER_H
#define MITARBEITER_H

#include "person.h"

class Mitarbeiter : public Person
{
public:
  Mitarbeiter(std::string vorname, std::string nachname);
};

#endif // MITARBEITER_H
