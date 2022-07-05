//C++ Program Convert Decimal Number To Binary Number Using Loop

#include <iostream>

using namespace std;

int main()
{
	int num, bin, rem, product = 1;
	cout << "Enter the number : ";
	cin >> num;
	
	cout << "The binary of " << num << " is : ";
	while(num > 0)
	{
		rem = num % 2;
		bin += (rem * product);
		num /= 2;
		product *= 10;
	}
	
	cout << bin << endl; 
	
	return 0;
}
