//C++ Program To Find Row In An Array That Includes The Greatest Amount Of Even Number

#include <iostream>

using namespace std;

int main()
{
	int row, col, count = 0, max = 0, maxIndex;
	cout << "Enter the row : ";
	cin >> row;
	cout << "Enter the column : ";
	cin >> col;
	
	int arr[20][20], maxEven[row];
	cout << "Enter the elements : " << endl;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout << "Enter the value for arr[" << i << "][" << j << "] : ";
			cin >> arr[i][j];  
		}
	}
	
	
	cout << "Entered matrix : " << endl;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0;j < col; j++)
		{
			if(arr[i][j] % 2 == 0)
			{
				count++;
			}
		}
		maxEven[i] = count;
		
		count = 0;
	}
	
	cout<<"The greatest amount of even number in each row is\n";
	for(int i = 0; i < row; i++) 
	{
		cout << maxEven[i] << "\t";
	}
		
	for(int i = 0;i < row; i++)
	{
		if(max < maxEven[i]) {
			max = maxEven[i];
			maxIndex = i + 1;
		}	
	}
	
	cout<< endl << "The row with the greatest amount of even number is "<< maxIndex << endl;

	return 0;
}
