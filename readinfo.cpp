#include <iostream>
#include "readinfo.h"
#include <vector>
#include <string>

using namespace std;

struct Scientist
{
   string name;
   string gender;
   int birth;
   int death;

};

void ReadInfo::counter(int counter)
{

}

void ReadInfo::run()
{
    vector<Scientist> scientist;

    Scientist sc;
    string confirm;

    cout << "Input information about famous computer scientists:" << endl;

       cout << "Name: " << endl;
       cin >> sc.name;
       cout << "Gender: " << endl;
       cin >> sc.gender;
       cout << "Date of birth: " << endl;
       cin >> sc.birth;
       cout << "Date of death (0 if not applicable):" << endl;
       cin >> sc.death;

       scientist.push_back(sc);

       cout << endl;
       cout << "Do you want to input information about another scientist?" << endl;
       cout << endl;

       int counter;
       counter++;



}


