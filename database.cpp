#include "database.h"
#include <iostream>
#include <fstream>

using namespace std;

DataBase::DataBase()
{

}
/*
void DataBase::makeFile()
{
    ofstream outFile;

        outFile.open("Database.txt",ofstream::out|ofstream::app);

        outFile << "Info\n\n" << endl;

        outFile.close();



        ifstream inFile;

        inFile.open("Database.txt");

        if(inFile.is_open())
        {
            inFile.seekg(0, inFile.end);
            int length = inFile.tellg();
            inFile.seekg(0, inFile.beg);

            char * optrBuffer = new char[length+1];

            inFile.get(optrBuffer, length);

            cout << optrBuffer << endl;

            delete [] optrBuffer;
        }

}
*/
