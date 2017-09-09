#include "mainwindow.h"
#include <QApplication>

#include "personen/person.h"
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <fstream>

//int main(int argc, char *argv[])
int main()
{
  /*
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
  */

  Person p("Max", "Mümmel");

  //DateiHandling.objektSpeichern(p, "person.doku");

  std::ofstream ofs("person");
  boost::archive::text_oarchive oa(ofs);
  //oa << p;

  //std::ifstream ifs("person");
  //boost::archive::text_iarchive ia(ifs);
  //ia >> p;

  return 0;
}
