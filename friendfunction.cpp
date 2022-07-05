//Write a C++ program to demonstrate how a common friend function can be used to exchange the private values of two classes.
#include<iostream>
using namespace std;
class Two;
class One
{
	int a;
	public:
		int geta(int n1)
		{
			a=n1;
		}
		int displaya()
		{
			cout<<"Number in class One: "<<a<<endl;
		}
		friend int exchange(One O, Two T);
};
class Two
{
	int b;
	public:
		int getb(int n2)
		{
			b=n2;
		}
		int displayb()
		{
			cout<<"Number in class Two: "<<b<<endl;
		}
		friend int exchange(One O,Two T);
};
int exchange(One O, Two T)
{
	int temp;
	cout<<"\nBefore Exchange:\n";
	O.displaya();
	T.displayb();
	temp=O.a;
	O.a=T.b;
	T.b=temp;
	cout<<"\nAfter Exchange:\n";
	O.displaya();
	T.displayb();
	
}
int main()
{
	int n1, n2;
	One O;
	Two T;
	cout<<"Enter two numbers for class One and class Two: ";
	cin>>n1>>n2;
	O.geta(n1);
	T.getb(n2);
	exchange(O,T);
}
