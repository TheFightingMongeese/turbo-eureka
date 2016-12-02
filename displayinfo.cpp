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
    //This function runs if the user presses the 'd' key.
    // it opens the database (.txt file), and displays the list therein.


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
