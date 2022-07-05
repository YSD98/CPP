//C++ Program to Remove Characters in String Except Alphabets
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	int i, count;
	string str, temp="";
	cout<<"Enter a string"<<endl;
	getline(cin,str);
	for(i=0;i<str.size();i++)
	{
		if(isalpha(str[i]))
		{
			temp+=str[i];
		}
	}
	str=temp;
	cout<<"\nThe String after removing characters except alphabets:\n"<<str<<" ";
}
