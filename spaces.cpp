//C++ Program to Remove Spaces from String
#include<iostream>
#include<cstring>
using namespace std;
char nospace(char *s);
int main()
{
	char str[100];
	
	cout<<"Enter the string\n";
	gets(str);
	
	cout<<"\nString with spaces:\n"<<str<<endl;
	nospace(str);
	cout<<"\nString without spaces:\n"<<str;
}
char nospace(char *s)
{
	int i, j, n;
	n=strlen(s);
	j=0;

	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			s[j++]=s[i];
		}
	}
	s[j]='\0';
	return s[100];
}
