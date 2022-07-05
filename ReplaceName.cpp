//Print "I AM IDIOT" Instead of Your Name Using an Array

#include <iostream>

using namespace std;

int main()
{
	char str[100], repl[100] = "I AM AN IDIOT";
	cout << "Enter the name : ";
	gets(str);
	
	
	for(int i = 0; repl[i] != '\0'; i++)
	{
		str[i] = repl[i];			
	}
			
	cout << str;		
	return 0;
}
