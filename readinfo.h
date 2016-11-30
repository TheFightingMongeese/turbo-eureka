#ifndef READINFO_H
#define READINFO_H
#include <vector>
#include <string>

using namespace std;
typedef struct
{
    string LastName;
    string FirstName;
    string gender;
    int birth;
    int death;

} Scientist;
class ReadInfo
{
public:
    ReadInfo();
    vector<Scientist> run();
    int numberOfSci;
    int getNumberOfSci();


};

#endif // READINFO_H
