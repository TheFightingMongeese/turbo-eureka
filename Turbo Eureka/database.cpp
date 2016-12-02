#include "database.h"
#include <iostream>
#include <fstream>

using namespace std;



DataBase::DataBase(vector<Scientist> scientist, int numberOfSci)
{
    //This saves all the input from the user into a .txt which
    //will serve as our database
    //Any code that's commented out is just us experimenting

    for(int i = 0; i < numberOfSci; i++)
    {
        ofstream outFile;

        outFile.open("..\\Person.txt",ofstream::out|ofstream::app);

        outFile << "Name: " << scientist[i].FirstName;
        //outFile << scientist[i].FirstName;
        outFile << " " << scientist[i].LastName << endl;
        outFile << "-----------" << endl;
        outFile << "Gender: " << scientist[i].gender << endl;
       // outFile << scientist[i].gender << endl;
        outFile << "Year of birth: " << scientist[i].birth << endl;
       // outFile << scientist[i].birth << endl;
        outFile << "Year of death: " << scientist[i].death << endl;
       // outFile << scientist[i].death << endl;
        outFile << endl;

        outFile.close();

        ifstream inFile;

        inFile.open("..\\Person.txt");

        //This code adds info to the list without overwriting previous data

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


