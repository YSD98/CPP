//C++ Program To Merge Two Array Into Third Array Unconditionally

#include <iostream>

using namespace std;

int main()
{
	int n, i, k;
	cout << "Enter the size : ";
	cin >> n;
	
	int arr1[n], arr2[n], arr3[n];
	cout << "Enter the elements for array 1" << endl;
	for(i = 0; i < n; i++)
	{
		cout << "Enter the value for arr1[" << i << "] : ";
		cin >> arr1[i];
		arr3[i] = arr1[i];
	}
	
	k = i;
	
	cout << "Enter the value for array 2" << endl;
	for(i = 0; i < n; i++)
	{
		cout << "Enter the value for arr2[" << i << "] : ";
		cin >> arr2[i];
		arr3[k] = arr2[i];
		k++;
	}
	
	cout << "After Merging of two arrays" << endl;
	for(i = 0; i < k; i++)
	{
		cout << arr3[i] << "\t";
	}
	return 0;
}
