#include <iostream>
#include "readinfo.h"
#include <vector>
#include <string>

using namespace std;

struct Scientist
{
   string Firstname;
   string Lastname;
   string gender;
   int birth;
   int death;

};

ReadInfo::ReadInfo()
{

}



void ReadInfo::run()
{
    vector<Scientist> scientist;

    Scientist sc;


    cout << "Input information about famous computer scientists:" << endl;

       cout << "Last Name: ";
       cin >> sc.Lastname;
       cout << "First Name: ";
       cin >> sc.Firstname;
       cout << "Gender: ";
       cin >> sc.gender;
       cout << "Year of birth: ";
       cin >> sc.birth;
       cout << "Year of death (0 if not applicable):";
       cin >> sc.death;

       scientist.push_back(sc);

       cout << endl;
       cout << "Do you want to input information about another scientist?" << endl;
       cout << endl;





}