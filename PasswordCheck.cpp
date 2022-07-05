//Write a C++ program to accept user name and password and throw an exception 
//if the password has less than 6 characters or does not contain a digit.

#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int main()
{
	char username[100];
	char password[100];
	bool isValid = false;
	cout << "Enter the user name : ";
	cin >> username;
	cout << "Enter the password : ";
	cin >> password;

	try {
		if(strlen(password) < 6) {
			throw "\npassword must have 6 character.";
		}		
		
		for(int i = 0; i < strlen(password); i++) {
			if(isdigit(password[i])) {
				isValid = true;
			} else {
				isValid = false;
			}
		}
		
		if(!isValid) {
			throw "\npassword must have atleast one digit.";
		} else {
			cout << "\nPassword is Valid!!" << endl;	
		}
				
	} catch(char const *c) {
		cout << c << endl;
		cout << "\nPlease try again.." << endl;
	} catch(...) {
		cout << "\nDefault exception" << endl;
	}
	
	return 0;
}
