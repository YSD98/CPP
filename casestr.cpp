//C++ Program to Convert first alphabet from lowercase to uppercase in a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string\n";
	getline(cin,s);
	s[0]-=32;
	cout<<"\nString after converting first alphabet to uppercase:\n"<<s;	
}
