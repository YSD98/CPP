//Delete Element from an Array at a Desired or Specific Position

#include <iostream>

using namespace std;

int main()
{
	int n, val, index;
	cout << "Enter the size : ";
	cin >> n;
	int arr[n];
	
	cout << "Enter the elements in an array : " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
		
	cout << "Enter the deleting value : ";
	cin >> val;
	
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == val)
		{
			index = i;
			break;
		}
	}
	
	for(int i = index; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	
	cout << "After deleting the element" << endl;
	for(int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << "\t";
	}
	
	return 0;
}
