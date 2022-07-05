//C++ Program To Find The Address Of Variable
#include <iostream>
using namespace std;
int main ()
{
   int  var;
   cout<<"Enter The variable: ";
   cin>>var;
   cout << "Address Of Variable: "<< &var;
   return 0;
}
