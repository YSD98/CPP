//C++ Program To Check An Array Is Armstrong Or Not

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the size : ";
	cin >> n;
	int arr[n], armst[n], armIndex = 0;
	
	cout << "Enter the elements : " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		int num = 0, rem = 0, sum = 0;
		num = arr[i];
		while(num > 0)
		{
			rem = num % 10;
			sum += rem * rem * rem;
			num /= 10;
		}
		
		if(sum == arr[i])
		{
			armst[armIndex] = arr[i];
			armIndex++;
		}
	}
	
	cout << "Armstrong numbers in an array " << endl;
	for(int i = 0; i < armIndex; i++)
	{
		cout << armst[i] << "\t";
	}
	
	return 0;
}
