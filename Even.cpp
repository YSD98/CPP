//C++ Program To Find Number Is Even / Odd Using Pointer

#include <iostream>

using namespace std;

int main()
{
	int n, *ptr;
	cout << "Enter the number : ";
	cin >> n;
	
	ptr = &n;
	
	if(*ptr % 2 == 0)
	{
		cout << *ptr << " is an even number." << endl;
	} else {
		cout << *ptr << " is a odd number." << endl;
	}
	
	return 0;
}
