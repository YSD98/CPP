//Write a program which declares a function int accept(int a, int b, int c); 
//which accepts three parameters a, b and c inputted by the user and returns the value obtained 
//by computing value of the expression a * b + c to the main program which displays the returned value.

#include <iostream>

using namespace std;

int accept(int, int, int);

int main()
{
	int a, b, c;
	cout << "Enter the a : ";
	cin >> a;
	cout << "Enter the b : ";
	cin >> b;
	cout << "Enter the c : ";
	cin >> c;
	
	cout << "(a * b) + c = " << accept(a, b, c); 
	
	return 0;
}

int accept(int a, int b, int c)
{
	return (a * b) + c;
}
