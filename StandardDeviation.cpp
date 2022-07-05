//C++ Program to Calculate Standard Deviation Using Function

#include <iostream>
#include <cmath>

using namespace std;

float StandardDeviation(float[], int);

int main()
{
	int size;
	
	cout << "Enter the size : ";
	cin >> size;
	
	float val[size];
	
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the value for val[" << i << "] : ";
		cin >> val[i];
	}
	
	cout << "Standard Deviation : " << StandardDeviation(val, size);
	return 0;
}

float StandardDeviation(float val[], int size){
	float sum = 0, SD = 0, mean;
	
	for(int i = 0; i < size; i++)
	{
		sum += val[i];
	}
	
	mean = sum / size;
	
	for(int i = 0; i < size; i++)
	{
		SD += pow(val[i] - mean, 2);
	}
	
	return sqrt(SD / size);
}

