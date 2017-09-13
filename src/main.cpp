#include "mainwindow.h"
#include <QApplication>

#include <QString>
#include <QDate>
#include "personen/person.h"
#include <iostream>

//int main(int argc, char *argv[])
int main()
{
  /*
   * Hauptfenster öffnen
   */
  /*
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
  */

  /*
   * Testbereich Konsole
   */

  QDate geb(1960,8,18);
  Person p("Cøüfjekłn", "ÄuÄÖß-QuaRx", geb);
  std::cout << "ID: " << p.getID().toStdString() << std::endl;
  return 0;
}
