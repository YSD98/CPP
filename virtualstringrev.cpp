//Write a program in C++ to print a string in reverse order by using the virtual base class. 
#include<iostream>
#include<string>
using namespace std;
class Original
{
	public:
		string s, r;
		void print()
		{
			cout<<"Enter a string: ";
			getline(cin, s);
		}		
};
class Abc
{
	public:
		void print()
		{
			cout<<"The String in Reverse: ";
		}	
};
class Reverse:virtual public Abc, virtual public Original
{
	public:
		void print()
		{
			r = string(s.rbegin(),s.rend());
			cout<<r;
		}
};
int main()
{
	Reverse r;
	Original *o=&r;
	Abc *a=&r;
	o->print();
	a->print();
	r.print();
}
