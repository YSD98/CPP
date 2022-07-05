//C++Program To Check Age Between 40 To 60 Using If/Else Statements

#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter the age : ";
	cin >> age;
	
	if(age >= 40 && age <= 60)
	{
		cout << "Age " << age << " is between 40 and 60";
	} else {
		cout << "Age " << age << " is not in between 40 and 60";
	}
	
	return 0;
}
