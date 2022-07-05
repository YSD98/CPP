//C++ Program To Reverse An Array

#include <iostream>

using namespace std;

int main()
{
	int n, revIndex;
	cout << "Enter the size : ";
	cin >> n;
	int arr[n], rev[n];
	
	revIndex = n - 1;
	
	for(int i = 0; i < n; i++)
	{
		cout << "Enter the value for arr[" << i << "] : ";
		cin >> arr[i];		
	}
	
	for(int i = 0; i < n; i++)
	{
		rev[revIndex] = arr[i];
		revIndex--;
	}
	
	cout << "After reversing : " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << rev[i] << "\t";
	}
	
	return 0;
}
