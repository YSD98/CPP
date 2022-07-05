//Write a C++ program to find the perfect numbers within a given number of range by using the virtual base class.
#include<iostream>
using namespace std;
class Var
{
	public:
		int n1, n2, i, sum, n;
};
class Range:virtual public Var
{
	public:
		void print()
		{
			cout<<"Enter the range of number: ";
			cin>>n1>>n2; 
		}
};
class Num:virtual public Var{
	public:
		void print()
		{
			cout<<"The Perfect Numbers between "<<n1<<" and "<<n2<<" are:\n";
		}
};
class Perfect:public Num, public Range
{
	public:
 		void print()
		{
		 	for(i=n1;i<n2;i++)
		 	{
		 		n=1;
    			sum = 0;
				while(n<i)
				{
     				if(i%n==0)
					    sum+=n;
					n++;
				}
				if(sum==i)
		  			cout<<i<<"\t";
		  	}		
		}
};
int main()
{
	Perfect p;
	Range *r=&p;
	Num *n=&p;
	r->print();
	n->print();
	p.print();	
}
