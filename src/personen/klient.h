#ifndef KLIENT_H
#define KLIENT_H

#include "person.h"

class Klient : public Person
{
public:
  Klient(int id, std::string vorname, std::string nachname);
};

#endif // KLIENT_H
