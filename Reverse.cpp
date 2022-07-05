//C++ Program To Print A Reverse Order Of Any Number Using Loop

#include <iostream>

using namespace std;

int main()
{
	int n, rev = 0;
	cout << "Enter the number : ";
	cin >> n;
	
	while(n > 0)
	{
		int rem = n % 10;
		rev = (rev * 10) + rem;
		n /= 10;
	}
	
	cout << "Reverse number : " << rev << endl;
	
	return 0;
}
