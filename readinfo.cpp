#include <iostream>
#include "readinfo.h"
#include <vector>
#include <string>

using namespace std;

struct Scientist
{
   string LastName;
   string FirstName;
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

    cout << "How many scientists do you want to input? " << endl;
    int numberOfSci = 0;
    cin >> numberOfSci;

    if(numberOfSci > 0)
    {
        cout << "Input information about famous computer scientists:" << endl;
        for(int i = 0; i < numberOfSci; i++)
        {
            cout << "Last Name: ";
            cin >> sc.LastName;
            cout << "First Name: ";
            cin >> sc.FirstName;
            cout << "Gender: ";
            cin >> sc.gender;
            cout << "Date of birth: ";
            cin >> sc.birth;
            cout << "Date of death (0 if not applicable): ";
            cin >> sc.death;
            cout << endl;

            scientist.push_back(sc);
        }
    }
        else
        {
            cout << "Input positive number of Scientists";
        }

}
