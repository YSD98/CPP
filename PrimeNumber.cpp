//C++ Program To Check Primeness Of An Array

#include <iostream>

using namespace std;

int main()
{
	int n, prime;
	cout << "Enter the size : ";
	cin >> n;
	int arr[n];
	
	cout << "Enter the elements of an array : " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		prime = 1;
		for(int j = 2; j < arr[i]; j++)
		{
			if(arr[i] % j == 0) {
				prime = 0;
				break;
			}
		}
		
		if(prime == 1) {
			cout << arr[i] << "\t";
		}
	}
	
	return 0;
}
