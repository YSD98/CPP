//Write a C++ Program to display the reverse of a number using the Virtual base Class in Object Oriented Programming(OOP).
#include<iostream>
using namespace std;
class Original
{
	public:
		int n;
		void print()
		{
			cout<<"Enter a number: ";
			cin>>n;
			
		}
};
class xyz
{
	public:
		void print()
		{
			cout<<"Reverse Number: ";
		}
};
class Reverse:virtual public Original, virtual public xyz
{
	public:
		int rem, rev;
		void print()
		{
			rev=0;
			while(n!=0)
			{
				rem=n%10;
				rev=(rev*10)+rem;
				n=n/10;
			}
			cout<<rev<<endl;
		}
};
int main()
{
	Reverse r;
	Original *o=&r;
	xyz *x=&r;
	o->print();
	x->print();
	r.print();
}
