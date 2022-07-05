//Write a function that displays at the left side of the screen a solid square of dollar signs ($) where the side length (s) is passed as a parameter by the user

#include <iostream>

using namespace std;

void SolidSquare(int);

int main()
{
	int n;
	cout << "Enter the n : ";
	cin >> n;
	
	SolidSquare(n);
	
	return 0;	
}

void SolidSquare(int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++){
			cout << "$ ";
		}
		
		cout << endl;
	}
}
