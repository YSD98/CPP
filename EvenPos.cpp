//C++ Program Sum Of Even-Positive, Even-Negative, Odd-Positive, Odd-Negative Of An Array

#include <iostream>

using namespace std;

int main()
{
	int size, isEPos = 0, isENeg = 0, isOPos = 0, isONeg = 0;
	cout << "Enter the size : ";
	cin >> size;
	
	int arr[size], ePos[size], eNeg[size], oPos[size], oNeg[size];
	
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the value for ["<< i <<"] : ";
		cin >> arr[i];
	}
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] > 0 && arr[i] % 2 == 0)
		{
			ePos[isEPos] = arr[i];
			isEPos++;
		} else if(arr[i] < 0 && arr[i] % 2 == 0)
		{
			eNeg[isENeg] = arr[i];
			isENeg++;
		} else if(arr[i] > 0 && arr[i] % 2 != 0)
		{
			oPos[isOPos] = arr[i];
			isOPos++;
		} else {
			oNeg[isONeg] = arr[i];
			isONeg++;
		}
	}
	
	cout << "Positive Even numbers" << endl;
	for(int i = 0; i < isEPos; i++)
	{
		cout << ePos[i] << "\t";
	}
	
	cout << endl << "Negative Even numbers" << endl;
	for(int i = 0; i < isENeg; i++)
	{
		cout << eNeg[i] << "\t";
	}
	
	cout << endl << "Positive Odd numbers" << endl;
	for(int i = 0; i < isOPos; i++)
	{
		cout << oPos[i] << "\t";
	}
	
	cout << endl << "Positive Odd numbers" << endl;
	for(int i = 0; i < isONeg; i++)
	{
		cout << oNeg[i] << "\t";
	}
	
	return 0;
}
