#include <iostream>
#include <fstream>
#include "database.h"

#include <string>



using namespace std;



ReadInfo::ReadInfo()
{

}

vector<Scientist> ReadInfo::run()
{
    vector<Scientist> scientist;

    Scientist sc;
    char velja = NULL;
    cout << "Press 's' to search, 'o' to organize the file and 'a' to add a scientist : ";
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

        return scientist;
    }
    else if(velja == 'o'|| velja == 'O')
    {
        // Endurraða hlutunum.
    }
    else if(velja == 's'|| velja == 'S')
    {
        string lina;
        cout << " hverjum viltu leita af ? : " ;
        cin >> lina;
      ifstream openfile("..\\Person.txt");
      if(openfile.is_open())
      {

          while(getline(openfile,lina));
          {
           cout << lina << endl;;
          }
          openfile.close();
      }
      else
      {
          cout << "file is not open";
      }
    }
    else
    {
        cout << " Invalid input";
    }
}
int ReadInfo::getNumberOfSci()
{
    return numberOfSci;
}
