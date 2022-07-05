//C++ Program to reverse all strings stored in an array
#include<iostream>
using namespace std;
int main()
{
	int n, i;
	char s[n][100];
	cout<<"Enter the number of strings to be stored in the array\n";
	cin>>n;
	cout<<"Enter "<<n<<" strings:\n";
	for(i=0;i<=n;i++)
		gets(s[i]);
	cout<<"\nOriginal Array of Strings:\n\n";
	for(i=0;i<=n;i++)
		cout<<s[i]<<" ";
	cout<<"\n\nReversed Array of Strings:\n\n";
	for(i=n;i>=0;i--)
		cout<<s[i]<<" ";
}
