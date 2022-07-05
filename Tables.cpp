//C++ Program To Print A Table Of Given Number Using Loop

#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	for(int i = 1; i <= 10; i++)
	{
		cout << i << " X " << num << " = " << i * num << endl;
	}
	return 0;
}
