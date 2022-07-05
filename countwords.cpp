//C++ Program to Count Words in String
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	int i, n, a=0, w=0;
	string str;
	cout<<"Enter a string"<<endl;
	getline(cin,str);
	
	n=str.length();
	
	for(i=0;i<=n;i++)
	{
		if(isalpha(str[i]))
			a++;
	}
	for(i=0;i<=n;i++)
	{
		if((str[i]==' ') && isalpha(str[i+1]))
			w++;
	}
	w++;
	cout<<"\nThe string has "<<a<<" alphabets and "<<w<<" words\n";
}
