#ifndef DATEIHANDLING_H
#define DATEIHANDLING_H

#include <boost/archive/basic_xml_iarchive.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

// TODO flock() lässt sich unter Linux für Locks anwenden.
// Vielleicht reichen auch .lock-Dateien mit Signatur.
// Oder doch eine Objektdatenbank


class DateiHandling
{
public:
  DateiHandling();

  /*
  objektSpeichern(Object &ob, std::string pfad);
  objektLesen(Object &ob, std::string pfad);
  */

};

#endif // DATEIHANDLING_H
