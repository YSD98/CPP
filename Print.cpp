// C++ Program To Print A Message Multiple Times Using Loop

#include <iostream>

using namespace std;

int main()
{
	int n, i = 1;
	char str[100];
	cout << "Enter the string : ";
	gets(str);
	cout << "Enter the number : ";
	cin >> n;
	
	
	while(i <= n)
	{
		cout << str << endl;
		i++;
	}
	return 0;
}
