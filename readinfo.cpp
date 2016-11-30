#include <iostream>
#include <fstream>
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


        for(int i = 0; i < numberOfSci; i++)
        {
            ofstream outFile;

            outFile.open("Person.txt",ofstream::out|ofstream::app);

            outFile << "Name: " << scientist[i].FirstName;
            outFile << " " << scientist[i].LastName << endl;
            outFile << "Gender: " << scientist[i].gender << endl;
            outFile << "Year of birth: " << scientist[i].birth << endl;
            outFile << "Year of death: " << scientist[i].death << endl;
            outFile << endl;

            outFile.close();

            ifstream inFile;

            inFile.open("Person.txt");

            if(inFile.is_open())
            {
                inFile.seekg(0, inFile.end);
                int length = inFile.tellg();
                inFile.seekg(0, inFile.beg);

                char * optrBuffer = new char[length+1];

                inFile.get(optrBuffer, length);

            }



        }

}
