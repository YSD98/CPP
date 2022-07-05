//C++ Program for Permutation of String
#include<iostream>
#include<string>
using namespace std;
int permutate(string str, int x, int n);
int main()
{
	string str;
	cout<<"Enter the string\n";
	getline(cin,str);
	int n=str.length();
	cout<<"\nAll the Permutations of '"<<str<<"' are:\n";
	permutate(str,0,n);
}
int permutate(string str, int x, int n)
{
	if(x==n)
		cout<<str<<endl;
	else
		for(int i=x;i<n;i++)
		{
			swap(str[x],str[i]);
			permutate(str, x+1, n);
			swap(str[x],str[i]);		
		}
}
