//C++ Program to Compare Two Strings Using Pointers

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2;
	string *p, *q;
	
	cout << "Enter the string1 : ";
	getline(cin, str1);
	cout << "Enter the string2 : ";
	getline(cin, str2);
	
	p = &str1;
	q = &str2;
	
	if(*p == *q) {
		cout << "Two strings are same." << endl;
	} else {
		cout << "Two strings are not equal" << endl;
	}

	return 0;
}

