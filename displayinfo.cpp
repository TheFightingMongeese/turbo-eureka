#include "displayinfo.h"
#include <iostream>
#include <fstream>

#include <string>

using namespace std;

DisplayInfo::DisplayInfo()
{

}

void DisplayInfo::display()
{
    ifstream file("..\\Person.txt");

    string content;

    cout << "Displaying list: " << endl;
    cout << endl;

    while(getline(file, content))
    {
       cout << content << endl;
    }

    //file.close();

}
