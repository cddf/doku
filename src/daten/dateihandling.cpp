#include "dateihandling.h"
#include <iostream>
#include <QtXmlPatterns>
#include <QFile>
#include <QDir>
#include <QXmlFormatter>

DateiHandling::DateiHandling(QString ID, kategorie k)
  : _ID(ID), _kat(k)
{
  switch (_kat) {
    case kategorie::klient:
      _verzeichnis = "Klienten";
      _root = "klient";
      break;
    case kategorie::mitarbeiter:
      _verzeichnis = "Mitarbeiter";
      _root = "mitarbeiter";
      break;
    case kategorie::doku:
      _verzeichnis = "Klienten";
      _root = "doku";
      break;
    case kategorie::ihp:
      _verzeichnis = "Klienten";
      _root = "hilfeplan";
      break;
    }
}


QString DateiHandling::ladeFeldPerson(QString feld)
{

  const QString queryUrl = QString("doc('%1/%2/%3/stammdaten.xml')//%4/%5/string()")
      .arg(_pfadDaten)
      .arg(_verzeichnis)
      .arg(_ID)
      .arg(_root)
      .arg(feld);

  QString antwort;
  _query.setQuery(queryUrl);
  _query.evaluateTo(&antwort);
  return antwort.trimmed();
}

/*
void DateiHandling::speichereFeldPerson(QString feld)
{
  QString root;

  if(person == "Klienten")
    root = "klient";
  else if (person == "Mitarbeiter")
    root = "mitarbeiter";

  const QString queryStr = QString("doc('%1/%2/%3/stammdaten.xml')//%4/%5/string()")
      .arg(_pfadDaten)
      .arg(person)
      .arg(_ID)
      .arg(root)
      .arg(feld);

  _query.setQuery(queryStr);

  /*
  QXmlFormatter formatter(query, myOutputDevice);
  formatter.setIndentationDepth(2);
  _query.evaluateTo(&formatter);
}
  */
