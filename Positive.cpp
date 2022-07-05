//C++ Program To Check Positive / Negative Number Of An Array

#include <iostream>

using namespace std;

int main()
{
	int size, isPos = 0, isNeg = 0;
	cout << "Enter the size : ";
	cin >> size;
	
	int arr[size], pos[size], neg[size];
		
	cout << "Enter the elements : ";
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the value for ["<< i <<"] : ";
		cin >> arr[i];
	}
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] >= 0) {
			pos[isPos] = arr[i];
			isPos++;
		} else {
			neg[isNeg] = arr[i];
			isNeg++;
		}
	}
	
	cout << "Positive numbers " << endl;
	for(int i = 0; i < isPos; i++)
	{
		cout << pos[i] << "\t";
	}

	cout << endl <<"Negative numbers " << endl;
	for(int i = 0; i < isNeg; i++)
	{
		cout << neg[i] << "\t";
	}		
	return 0;
}
