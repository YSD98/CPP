//Write a C++ program to display the addition of two numbers using pointer.
#include<iostream>
using namespace std;
class Point
{
	int *n1, *n2;
	public:
		Point()
		{
			n1=new int;
			n2=new int;
		}
		int getn()
		{
			cout<<"Enter two numbers\n";
			cin>>*n1>>*n2;
		}
		int result()
		{
			cout<<"The sum of "<<*n1<<" and "<<*n2<<" is "<<*n1+*n2;
		}
};
int main()
{
	Point p;
	p.getn();
	p.result();
}
