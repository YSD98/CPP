//Write a program to copy the contents of one text file to another while changing the case of every alphabet.(normal pgm)

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
	ifstream file1 ("b.txt");
	ofstream file2 ("a.txt");
	
	char ch;
	
	if(file1.is_open())
	{
		cout << "Successfully opened!!" << endl;	
	}
		
	while(!file1.eof())
	{
		file1.get(ch);
		if(isupper(ch)) {
			ch = tolower(ch);
		} else if(islower(ch))
		{
			ch = toupper(ch);
		}
		
		file2 << ch;		
	}
	

	file1.close();
	file2.close();
	return 0;
}
