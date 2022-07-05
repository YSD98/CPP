//C++ Program To Find The GCD And LCM Of Two Numbers

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, a, b, t, gcd, lcm;
	
	cout << "Enter the number 1 : ";
	cin >> num1;
	cout << "Enter the number 2 : ";
	cin >> num2;
	
	a = num1;
	b = num2;
	
	while(b > 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	
	gcd = a;
	lcm = (num1 * num2) / gcd;
	
	cout << "GCD : " << gcd << endl;
	cout << "LCM : " << lcm << endl;
	
	return 0;
}
