//C++ Program to Find Frequency of Characters in String
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int i, count;
	char str[100], ch;
	cout<<"Enter a string"<<endl;
	gets(str);
	cout<<"Enter the character\n";
	cin>>ch;
	int n=strlen(str);
	count=0;
	for(i=0;i<n;i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	cout<<"The frequency of '"<<ch<<"' in the given string is "<<count<<endl;
}
