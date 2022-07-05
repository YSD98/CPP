//Insert an Element Desired or Specific Position in an Array

#include <iostream>

using namespace std;

int main()
{
	int n, pos, val;
	cout << "Enter the size : ";
	cin >> n;
	int arr[n];
	
	cout << "Enter the elements of an array : " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Enter the position : ";
	cin >> pos;
	cout << "Enter the inserting value : ";
	cin >> val;
	
	for(int i = n - 1; i >= pos - 1; i--)
	{
		arr[i + 1] = arr[i];
	}
	
	arr[pos - 1] = val;
	
	cout << "After inserting new elements" << endl;
	for(int i = 0; i <= n; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;	
}
