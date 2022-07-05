//C++ Program to Delete Words from String Array
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int i, n;
	string str[20], word;
	cout<<"Enter the number of words in the string\n";
	cin>>n;

	cout<<"Enter the string elements"<<endl;
	for(i=0;i<=n;i++)
	{
		getline(cin,str[i]);
	}
	
	cout<<"Enter the word to be removed\n";
	getline(cin,word);
	
	for(i=0;i<=n;i++)
	{
		if(str[i]==word)
		{
			str[i]=str[i+1];
			n--;
	 	}
	}
	cout<<"String after deleting '"<<word<<"'\n";
	for(i=0;i<=n;i++)
	{
		cout<<str[i]<<" ";
	}
}
	
