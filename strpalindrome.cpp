//C++ Program to check whether String is Palindrome or not
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, rev;
	cout<<("Enter a string\n");
	getline(cin, s);
	rev = string(s.rbegin(),s.rend());
	if(rev==s)
		cout<<s<<" is a Palindrome\n";
	else
		cout<<s<<" is not a Palindrome\n";
}
