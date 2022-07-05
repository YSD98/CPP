//C++ Program to Find Substring in String
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string os, ss;
	int p, l;
	cout<<"Enter a string\n";
	getline(cin,os);
	cout<<"Enter the index and length of substring\n";
	cin>>p>>l;
	ss=os.substr(p,l);
	cout<<"The substring is: "<<ss;
}
