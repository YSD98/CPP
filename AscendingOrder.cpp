//C++ Program to Read array of Numbers and Arrange Them in Ascending Order

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the size : ";
	cin >> n;
	int arr[n], *ptr[n];
	
	cout << "Enter the elements" << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		ptr[i] = &arr[i];
	}
	
	cout << "Entered array elements" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << *ptr[i] << "\t";
	}
	 
	cout << endl;
	cout << "Ascending order : " << endl; 
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(*ptr[i] > *ptr[j])
			{
				int temp = *ptr[i];
				*ptr[i] = *ptr[j];
				*ptr[j] = temp;
			}	
		}	
		
		cout << *ptr[i] << "\t";
	} 
	
	return 0;
}
