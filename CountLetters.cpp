//C++ Program To Count Letters, Space, Digits, And Others Using If/Else Statements

#include <iostream>

using namespace std;

int main()
{
	char str[100]; 
	int alphaCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;
	cout << "Enter the string : ";
	gets(str);
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			alphaCount++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			digitCount++;
		} 
		else if(str[i] == ' ') {
			spaceCount++;
		} 
		else {
			otherCount++;
		}
	}
	
	cout << "alphabet count : " << alphaCount << endl;
	cout << "Digit count : " << digitCount << endl;
	cout << "Space count : " << spaceCount << endl;
	cout << "Other count : " << otherCount << endl;
	
	return 0;
}
