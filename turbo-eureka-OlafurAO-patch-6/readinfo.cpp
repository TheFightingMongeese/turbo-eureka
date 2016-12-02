#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "database.h"
#include "displayinfo.h"



using namespace std;

ReadInfo::ReadInfo()
{

}

vector<Scientist> ReadInfo::run()
{
    vector<Scientist> scientist;

    Scientist sc;

    char velja; //= NULL;
    cout << "       Skilaverkefni 1" << endl;
    cout << "------------------------------" << endl;
    cout << "Press 'a' to add a scientist " << endl;
    cout << "Press 'd' to display list " << endl;
    cout << "Press 's' to search for scientists " << endl;
    cout << "Press 'o' to organize the data " << endl;
    cin>>velja;

    if(velja == 'a'|| velja == 'A'){
        cout << "How many scientists do you want to input? " << endl;
        numberOfSci = 0;
        cin >> numberOfSci;

        if(numberOfSci > 0)
        {
            cout << "Input information about famous computer scientists:" << endl;
            for(int i = 0; i < numberOfSci; i++)
            {
                // We save all the user input into a vector.
                // Data from this process is transferred to the database

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
            cout << "Input valid number of Scientists!" << endl;            
        }

        return scientist;

    }


    else if(velja == 'o'|| velja == 'O')
    {
        int choice;

        cout << "How do you want to organize the list? " << endl;
        cout << "1. By name (alphabetically) " << endl;
        cout << "2. By year of birth " << endl;
        cout << "3. By year of death " << endl;
        cin >> choice;

        if(choice == 1)
        {
          //  sort(scientist.begin(), scientist.end());
        }
        else if(choice == 2)
        {/*
            sort(scientist.birth.begin(), scientist.birth.end());
            DisplayInfo dis;
            dis.display();

            */

        }
        else if(choice == 3)
        {

        }

    }
    else if(velja == 's'|| velja == 'S')
    {
        string firstnafn;
        string lastnafn;
        string kyn;
        int born;
        int dead;
        string search;
        ifstream("..\\Person.txt");


        cout << "Who do you want to search for? : " ;
        cin >> search;

       ifstream openfile("..\\Person.txt");
      if(openfile.is_open())
      {
          size_t pos;
          while(openfile.good())
            {
                getline(openfile,search); // get line from file
                pos=search.find(search); // search
                if(pos!=string::npos) // string::npos is returned if string is not found
                  {
                      cout <<"Found!" << search;
                      break;
                  }
            }

      }

      else
      {
          cout << "file is not open" << endl;
      }
      cin.get();

    }

    else if(velja == 'd' || velja == 'D')
    {
        DisplayInfo dis;
        dis.display();
    }

    else
    {
        cout << " Invalid input" << endl;
        //run();
    }

    //run();
    return run();
}
int ReadInfo::getNumberOfSci()
{
    return numberOfSci;
}
