//Write a C++ program to accept the set of 5 numbers and print the numbers using pointer.
#include<iostream>
using namespace std;
class Point
{
	int *p;
	public:
		Point()
		{
			p=new int[4];	
		}
		int array()
		{
			cout<<"Enter 5 numbers"<<endl;
			for(int i=0;i<=4;i++)
				cin>>p[i];
		}
		int display()
		{
			cout<<"The 5 numbers are:\n";
			for(int i=0;i<=4;i++)
				cout<<p[i]<<"\t";
		}
};
int main()
{
	Point pt;
	pt.array();
	pt.display();
}
