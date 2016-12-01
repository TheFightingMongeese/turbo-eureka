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
    char velja; // = NULL;
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
            run();
        }

        else
        {
            cout << "Input valid number of Scientists!" << endl;

            run();
        }

        return scientist;
    }
    else if(velja == 'o'|| velja == 'O')
    {
        DataBase data;
        int choice;

        cout << "How do you want to organize the list? " << endl;
        cout << "1. By name (alphabetically) " << endl;
        cout << "2. By year of birth " << endl;
        cout << "3. By year of death " << endl;
        cin >> choice;

        if(choice == 1)
        {
            data.alphabet();
        }
        else if(choice == 2)
        {
            data.byBirth();
        }
        else if(choice == 3)
        {
            data.byDeath();
        }

    }
    else if(velja == 's'|| velja == 'S')
    {
        string firstnafn;
        string lastnafn;
        string kyn;
        int born;
        int dead;

        /*string lina;
        cout << " hverjum viltu leita af ? : " ;
        cin >> lina;*/

      ifstream openfile("..\\Person.txt");
      if(openfile.is_open())
      {
          while(openfile >> firstnafn >> lastnafn >> kyn >> born >> dead)
          {
           cout <<"Name: "  << firstnafn <<" "<< lastnafn << "\n";
           cout << "Gender:  " << kyn << "\n" << "Born: " << born << "\n" << "Died (0 if alive:) " << dead << endl;
          }
          openfile.close();

      }

      else
      {
          cout << "file is not open" << endl;
      }
      cin.get();

    }

    else
    {
        cout << " Invalid input" << endl;
        run();
    }

    //run();

}
int ReadInfo::getNumberOfSci()
{
    return numberOfSci;
}
