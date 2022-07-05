/*Write a C++ program to calculate the percentage of a student using multi-level inheritance. 
Accept the marks of three subjects in base class. 
A class will derived from the above mentioned class which includes a function to find the total marks obtained 
and another class derived from this class which calculates and displays the percentage of student.*/
#include<iostream>
using namespace std;
class Marks
{
	public:
		float m[3];
		int accept()
		{
			cout<<"Enter the marks obtained in 3 subjects:\n";
			for(int i=0;i<3;i++)
			{
				cout<<"Marks in Subject "<<i+1<<": ";
				cin>>m[i];
			}
		}
};
class Total:public Marks
{
	public:
		float sum;
		int add()
		{
			sum=0;
			for(int i=0;i<3;i++)
			{
				sum+=m[i];
			}
			cout<<"\nTotal Marks obtained\t: "<<sum<<"/300";
		}
};
class Percentage:public Total
{
	public:
		int cal()
		{
			cout<<"\nPercentage secured\t: "<<(sum/300)*100<<"%";
		}
};
int main()
{
	Percentage p;
	p.accept();
	p.add();
	p.cal();
}
