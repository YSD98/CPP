// Write a program in C++ to make such a pattern like a pyramid with numbers increased by 1 by using the virtual base class.
#include<iostream>
using namespace std;
class Var
{
	public:
		int n, i, j, k, num;
		
};
class Rows:virtual public Var
{
	public:
		void pattern()
		{
			cout<<"Enter the number of rows: ";
			cin>>n;
			cout<<endl;
		}
};
class Print:virtual public Var
{
	public:
		void pattern()
		{
			cout<<"Pyramid with numbers increased by 1 using "<<n<<" rows:"<<endl<<endl;
		}
};
class Pyramid: public Rows, public Print
{
	public:
		void pattern()
		{
			num=1;
			for(i=1;i<=n;i++)
			{
				for(j=n-i;j>0;j--)
				{
					cout<<" ";
				}
				for(k=1;k<=i;k++)
				{
					cout<<num++<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	Pyramid pyr;
	Rows *r=&pyr;
	Print *p=&pyr;
	r->pattern();
	p->pattern();
	pyr.pattern();
}
