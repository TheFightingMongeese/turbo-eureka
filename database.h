#ifndef DATABASE_H
#define DATABASE_H
#include "readinfo.h"
#include <vector>

using namespace std;
class DataBase
{
public:
    DataBase(vector<Scientist> s);
    void makeFile();
};

#endif // DATABASE_H
