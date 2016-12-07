#include <iostream>
#include <string>
#include <QCoreApplication>
#include <QtSql>
#include <QtDebug>
#include <QString>

using namespace std;

int main()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Computers.sqlite";
    db.setDatabaseName(dbName);

  db.open();


  QSqlQuery query(db);


  query.exec("SELECT * FROM Computers");



  while(query.next())
  {
           int year = query.value("Year").toUInt();
           string name = query.value("Name").toString().toStdString();
           bool built = query.value("Built").toUInt();
           string type = query.value("Type").toString().toStdString();
  }









//  computers.push_back(Computers(year, name, built, type));



}
