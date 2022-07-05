/*Write a C++ program to add two numbers using single inheritance. 
Accept these two numbers from the user in base class and display the sum of these two numbers in derived class.*/
#include<iostream>
using namespace std;
class Numbers
{
	int n1, n2;
	public:
		int accept()
		{
			cout<<"Enter two numbers\n";
			cin>>n1>>n2;
		}
		int getn1()
		{
			return n1;
		}
		int getn2()
		{
			return n2;
		}
};
class Addition:public Numbers
{
	public:
		int add()
		{
			cout<<"The sum of "<<getn1()<<" and "<<getn2()<<" is "<<getn1() + getn2();
		}
};
int main()
{
	Addition a;
	a.accept();
	a.add();
}
