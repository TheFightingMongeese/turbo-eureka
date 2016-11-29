#include "readinfo.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
      ReadInfo read;


      char confirm;

      do
      {

           read.run();
           cin >> confirm;

      }while(confirm == 'y');





}
