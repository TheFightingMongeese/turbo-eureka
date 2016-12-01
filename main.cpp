#include "displayinfo.h"
#include "database.h"

int main()
{
    vector<Scientist> s;
    //DataBase make;
    ReadInfo read;

    //make.makeFile();
    s = read.run();
    DataBase b(s, read.getNumberOfSci());
    DisplayInfo dis;

    dis.display();

}
