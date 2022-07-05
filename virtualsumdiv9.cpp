//Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9.
#include<iostream>
using namespace std;
class Var
{
	public:
		int i, sum;
		void print()
		{
			cout<<"Integers Divisible by 9 between 100 and 200:\n";
		}
};
class Cal
{
	public:
		void print()
		{
			int sum=0;
			for(int i=100;i<=200;i++)
			{
				if(i%9==0)
				{
					cout<<i<<"\t";
					sum += i;
				}
			}
			cout<<"\n\nSum of all Integers between 100 and 200 which are Divisible by 9: "<<sum;
		}
};
class Res:virtual public Var, virtual public Cal
{
};
int main()
{
	Res r;
	Var *v=&r;
	Cal *c=&r;
	v->print();
	c->print();
}
