//Write a function which returns the greatest of the three floating point numbers passed to it as parameters.

#include <iostream>

using namespace std;

float GreatestNumber(float, float, float);

int main()
{
	float a, b , c;
	cout << "Enter the a : ";
	cin >> a;
	cout << "Enter the b : ";
	cin >> b;
	cout << "Enter the c : ";
	cin >> c;
	
	float greatest = GreatestNumber(a, b, c);
	cout << "The greatest number : " << greatest << endl;
	return 0;
}

float GreatestNumber(float a, float b, float c)
{
	float result;
	
	if(a > b && a > c) {
		result = a;
	} else if (b > a && b > c) {
		result = b;
	} else {
		result = c;
	}
	
	return result;
}
