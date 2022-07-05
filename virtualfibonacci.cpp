//Fibonacci Series Program in C++ with virtual inheritance.
#include<iostream>
using namespace std;
class Var
{
	public:
		int n, i, a, b, c;
};
class Num:virtual public Var
{
	public:
		void print()
		{
			cout<<"Enter the value of n: ";
			cin>>n;
		}
};
class Ini:virtual public Var
{
	public:
		Ini()
		{
			a=0;
			b=1;
			c=0;
		}
};
class Fibonacci:public Num, public Ini
{
	public:
		void print()
		{
			cout<<"The Fibonacci Series:"<<endl;
			for(i=0;i<n;i++)
			{
				cout<<c<<"\t";
				a=b;
				b=c;
				c=a+b;
			}
		}
};
int main()
{
	Fibonacci f;
	Num *n=&f;
	n->print();
	f.print();
}
