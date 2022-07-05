/*Write a program in C++ to convert a decimal number into binary 
without using an array and using the Virtual base Class in Object Oriented Programming(OOP).*/
#include<iostream>
using namespace std;
class Var
{
	public:
		int n, rem, bin, p;
};
class Num:virtual public Var
{
	public:
		void print()
		{
			cout<<"Enter a number: ";
			cin>>n;
		}
};
class Decimal:virtual public Var
{
	public:
		void print()
		{
		cout<<"Decimal Number: "<<n<<endl;
		}
};
class Binary:public Num, public Decimal
{
	public:
		void print()
		{
			bin=0;
			p=1;
			while(n!=0)
			{
				rem=n%2;
				bin=bin+(rem*p);
				p=p*10;
				n=n/2;
			}
			cout<<"Binary Value: "<<bin<<endl;
		}
};
int main()
{
	Binary b;
	Num *n=&b;
	Decimal *d=&b;
	n->print();
	d->print();
	b.print();	
}
