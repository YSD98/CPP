//C++ Program to Sort Elements in Lexicographical Order (Dictionary Order) Using For Loop

#include <iostream>

using namespace std;

int main()
{
	int size;
	cout << "Enter the size : ";
	cin >> size;
	string str[size], tmp;
	
	for(int i = 0; i < size; i++)
	{
		cin >> str[i];
	}

	for(int i = 0; i < size - 1; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(str[i] > str[j])
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}
	
	cout << "Elements in Lexicographical Order : ";
	for(int i = 0; i < size; i++)
	{
		cout << str[i] << " ";
	}
}
