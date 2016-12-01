#include "database.h"
#include <iostream>
#include <fstream>


using namespace std;



DataBase::DataBase(vector<Scientist> scientist, int numberOfSci)
{


    for(int i = 0; i < numberOfSci; i++)
    {
        ofstream outFile;

        outFile.open("..\\Person.txt",ofstream::out|ofstream::app);

        outFile << "Name: " << scientist[i].FirstName;
        //outFile << scientist[i].FirstName;
        outFile << " " << scientist[i].LastName << endl;
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

void DataBase::alphabet()
{

}

void DataBase::byBirth()
{

}

void DataBase::byDeath()
{

}
