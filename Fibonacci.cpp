//C++ Program To Print The Fibonacci Series Up to Given Number Of Terms

#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 1, c, n;
	cout << "Enter the number : ";
	cin >> n;
	cout << a << endl;
	cout << b << endl;
	
	for(int i = 0; i < n; i++)
	{
		c = a + b;
		
		if(c > n)
			break;
			
		a = b;
		b = c;
		
		cout << c << endl;
	}
	
	return 0;
}
