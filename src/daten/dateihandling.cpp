#include "dateihandling.h"
#include <iostream>
#include <QtXmlPatterns>
#include <QFile>
#include <QDir>

DateiHandling::DateiHandling()
{

}

QString DateiHandling::ladeFeldKlient(QString ID, QString feld)
{
  return ladeFeldPerson("Klienten", ID, feld);
}

QString DateiHandling::ladeFeldMitarbeiter(QString ID, QString feld)
{
  return ladeFeldPerson("Mitarbeiter", ID, feld);
}

QString DateiHandling::ladeFeldPerson(QString person, QString ID, QString feld)
{
  QString root;

  if(person == "Klienten")
    root = "klient";
  else if (person == "Mitarbeiter")
    root = "mitarbeiter";

  const QString queryUrl = QString("doc('%1/%2/%3/stammdaten.xml')//%4/%5/string()")
      .arg(_pfadDaten)
      .arg(person)
      .arg(ID)
      .arg(root)
      .arg(feld);

  QString antwort;
  QXmlQuery query;
  query.setQuery(queryUrl);
  query.evaluateTo(&antwort);
  return antwort.trimmed();
}
