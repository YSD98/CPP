//C++ Program to Convert a person's name in Abbreviated
#include<iostream>
using namespace std;
int main()
{
    char first[20], middle[20], surname[20];
    cout<<"Enter The First Name Middle Name & Last Name \n";
    cin>>first >>middle >>surname;
    cout<<"Abbreviated Name: ";
    cout<<first[0]<<"."<<" "<<middle[0]<<"."<<" "<<surname[0];
    return 0;
}
