#include "mainwindow.h"
#include <QApplication>

#include <QString>
#include <QDate>
#include "personen/person.h"
#include "personen/klient.h"
#include "daten/dateihandling.h"
#include <iostream>
#include <typeinfo>

//int main()
int main(int argc, char *argv[])
{
  /*
   * Hauptfenster öffnen
   */
  QApplication a(argc, argv);
  /*
  MainWindow w;
  w.show();

  */

  /*
   * Testbereich Konsole
   */

  QDate geb(1960,8,18);
  Person p("Cøüfjekłn", "ÄuÄÖß-QuaRx", geb);
  Klient k("mustereck1960");
  std::cout << "ID: " << p.getID().toStdString() << std::endl;
  std::cout << "vorname: " << k.getVorname().toStdString() << std::endl;
  std::cout << "nachname: " << k.getNachname().toStdString() << std::endl;
  std::cout << "geburtstag: " << k.getGeburtsdatum().toString("dd.MM.yyyy").toStdString() << std::endl;

  DateiHandling d("test", DateiHandling::kategorie::klient);
  d.speichereFeldPerson("egal");

  //return a.exec();
  return 0;
}
