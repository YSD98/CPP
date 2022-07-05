//Write a program to find the roots of a quadratic equation. 
//Assume that the quadratic equation only has unequal or equal roots. 
//The program should use separate set of functions to determine whether the equation has equal or unequal roots

#include <iostream>
#include <cmath>

using namespace std;

void EqualRoots(float, float);
void UnEqualRoots(float, float, float);
void ComplexRoots(float, float, float);

int main()
{
	float a, b, c, d;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter c : ";
	cin >> c;
	
	d = (b * b) - (4 * a * c);
	
	if(d == 0)
	{
		cout << "Roots are real and equal." << endl;
		EqualRoots(a, b);
	} else if(d > 0)
	{
		cout << "Roots are real and unequal." << endl;
		UnEqualRoots(a, b, d);
	} else if(d < 0){
		cout << "Roots are complex and different." << endl;
		ComplexRoots(a, b, d);
	}
	
	return 0;
}

void EqualRoots(float a, float b)
{
	float x;
	x = -b/(2 * a);
	cout << "x = " << x << endl;
}

void UnEqualRoots(float a, float b, float d)
{
	float x1, x2;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}

void ComplexRoots(float a, float b, float d)
{
	float realPart, imaginaryPart;
	realPart = -b/(2 * a);
	imaginaryPart = sqrt(-d) / (2 * a);
	
	cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
	cout << "x1 = " << realPart << "-" << imaginaryPart << "i" << endl;
}
