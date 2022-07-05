//C++ Program To Average Of Array Function Of Using Pointer

#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0, average;
	cout << "Enter the size : ";
	cin >> n;
	int arr[n], *ptr[n];
	
	cout << "Enter the elements : " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		ptr[i] = &arr[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		sum += *ptr[i];
	}	
	
	cout << "sum of an array : " << sum << endl;
	
	average = sum / n;
	
	cout << "Average = " << average << endl;
	return 0;
}
