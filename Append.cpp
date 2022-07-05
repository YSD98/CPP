//Write a C++ program to open output file 'a.txt' and append data to it.(normal pgm)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string str;
	
	cout << "Enter the string to append : ";
	getline(cin, str);
	
	ofstream file2;
	 
	file2.open("file.txt", ios::app);
	
	if(file2.is_open())
	{
		file2 << str;
		cout << "Appended the string to that file." << endl;
	}

	file2.close();
	
	return 0;
}
