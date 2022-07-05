//C++ Program To Print Address Of Pointer Of An Array Using Pointer

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the size : ";
	cin >> n;
		
	int arr[n], *ptr[n];
	
	cout << "Enter the elements : " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		ptr[i] = &arr[i];
	}
	
	cout << "Address of an array elements" << endl;
	
	for(int i = 0; i < n; i++)
	{
		cout << "Address of arr["<<i<<"] : " << ptr[i] << endl;
	}
	
	return 0;
}
