/*Write a C++ program to design a base class Person (name, address, phone_no). 
Derive a class Employee (eno, ename) from Person. Derive a class Manager (designation, department name, basic-salary) from Employee. 
Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include<iostream>
using namespace std;
class Person
{
	public:
		string name[20], address[20], phone_no[10];
};
class Employee:public Person
{
	public:
		int eno[10];
		string ename[20];		
};
class Manager:public Employee
{
	public:
		string designation[20], department[20];
		float salary[10];
		int i, temp;
		int accept(int n)
		{
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter Details of Employee #"<<i+1<<endl;
				cout<<"Employee Name: ";
				cin>>ename[i];
				cout<<"Employee Number: ";
				cin>>eno[i];
				cout<<"Employee Address: ";
				cin>>address[i];
				cout<<"Employee Phone Number: ";
				cin>>phone_no[i];
				cout<<"Employee Designation: ";
				cin>>designation[i];
				cout<<"Employee Department: ";
				cin>>department[i];
				cout<<"Employee Salary: Rs.";
				cin>>salary[i]; 
			}
		}
		int display(int n)
		{
			for(i=0;i<n;i++)
			{
				cout<<"\nDetails of Employee #"<<i+1<<endl;
				cout<<"Employee Name\t\t: "<<ename[i]<<"\nEmployee Number\t\t: "<<eno[i]<<"\nEmployee Address\t: "<<address[i];
				cout<<"\nEmployee Phone Number\t: "<<phone_no[i]<<"\nEmployee Designation\t: "<<designation[i];
				cout<<"\nEmployee Department\t: "<<department[i]<<"\nEmployee Salary\t\t: Rs."<<salary[i]<<endl;  
			}
		}
		int highsal(int n)
		{
			temp=0;
			for(i=0;i<n;i++)
			{
				if(salary[i]>salary[temp])
				{
					temp=i;
				}
			}
			cout<<endl<<ename[temp]<<" is the manager with the highest salary of Rs."<<salary[temp]<<endl;
			cout<<"Employee Name\t\t: "<<ename[temp]<<"\nEmployee Number\t\t: "<<eno[temp]<<"\nEmployee Address\t: "<<address[temp];
			cout<<"\nEmployee Phone Number\t: "<<phone_no[temp]<<"\nEmployee Designation\t: "<<designation[temp];
			cout<<"\nEmployee Department\t: "<<department[temp]<<"\nEmployee Salary\t\t: Rs."<<salary[temp]<<endl;
		}
};
int main()
{
	int n, op;
	Manager m;
	cout<<"Enter the number of employees: ";
	cin>>n;
	m.accept(n);
	cout<<endl<<"Select an option\n"<<"1. Display details of "<<n<<" managers\n2. Display details of manager with the highest salary\n";
	cin>>op;
	if(op==1)
		m.display(n);
	else if(op==2)
		m.highsal(n);
	else
		cout<<"Invalid Selection";
}
