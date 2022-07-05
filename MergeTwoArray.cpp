//C++ Program To Merge One Accending And Another One Is Descending Array In Third Array Should be Descending Order

#include <iostream>

using namespace std;

int main()
{
	int n, i, k = 0;
	cout << "Enter the size: ";
	cin >> n;
	
	int a[n], b[n], c[n];
	
	cout << "Enter the elements in first array in ascending order: " << endl;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		c[i] = a[i];
	}
	
	k = i;
	
	cout << "Enter the elements in second array in descending order: " << endl;
	for(i = 0; i < n; i++)
	{
		cin >> b[i];
		c[k] = b[i];
		k++;
	}
	
	cout << "New array : " << endl;
	for(int i = 0; i < k; i++)
	{
		for(int j = i + 1; j < k; j++)
		{
			if(c[i] < c[j]) {
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}		
		}
		
		cout << c[i] << "\t";
	}
	
	return 0;
}
