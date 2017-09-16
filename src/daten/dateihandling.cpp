#include "dateihandling.h"
#include <iostream>
#include <QFile>
#include <QDir>
#include <QDomDocument>

DateiHandling::DateiHandling(const QString ID, const kategorie k)
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


QString DateiHandling::ladeFeldPerson(const QString feld)
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

void DateiHandling::speichereFeldPerson(const QString feld)
{
  QDomDocument doc("xml");

  QDomElement root = doc.createElement("klient");
  doc.appendChild(root);

  QDomElement tag = doc.createElement("Greeting");
  root.appendChild(tag);

  QDomText t = doc.createTextNode("Hello World");
  tag.appendChild(t);

  QString xml = doc.toString();
  std::cout << xml.toStdString();
}
