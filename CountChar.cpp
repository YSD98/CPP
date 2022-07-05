//Write a C++ program to read text file and count number of characters in it.(normal pgm)

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
	ifstream file;
	int charCount = 0, spaceCount = 0, numCount = 0;
	char ch, letters[100], input;
	file.open("file.txt");
	if(file.is_open())
	{
		cout << "File is successfully opened." << endl;
	}
	
	while(!file.eof())
	{
		file.get(ch);
		if(isalpha(ch)) {
			charCount++;
		}		
		else if(isdigit(ch)){
			numCount++;
		} else if(ch == ' ')
		{
			spaceCount++;
		}
	}	
	
	cout << "Character count : " << charCount << endl;
	cout << "Space count : " << spaceCount << endl;
	cout << "Digit count : " << numCount << endl;
	return 0;
}
