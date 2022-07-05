//C++ Program to convert first letter of each word to uppercase and other to lowercase in string array 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, i, j;
	string s[20];
	cout<<"Enter the number of strings to be stored in the array\n";
	cin>>n;
	cout<<"Enter "<<n<<" strings:\n";
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<=n;i++)
		s[i][0]-=32;
	cout<<"\nArray after converting string's first alphabet to uppercase:\n";
	for(i=0;i<n;i++)
		cout<<s[i]<<" ";
}
