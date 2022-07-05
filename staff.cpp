/*Create a class staff having fields: Staff_id , name, salary. Write a menu driven program for:

	1) To accept the data
	2) To display the data
	3) To sort the data by name*/
#include<iostream>
using namespace std;
class staff{
	int staff_id[100];
	string name[100];
	float salary[100];
	public:
		int accept(staff s, int n);
		int display(staff s, int n);
		int sort(staff s, int n);
};
int staff::accept(staff s, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter Staff ID: ";
		cin>>staff_id[i];
		cout<<"Enter Staff Name: ";
		cin>>name[i];
		cout<<"Enter Staff Salary: ";
		cin>>salary[i];
	}
		
}
int staff::display(staff s, int n)
{
	cout<<"\nStaff Details\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\nStaff ID\t: "<<staff_id[i]<<"\nStaff Name\t: "<<name[i]<<"\nStaff Salary\t: Rs."<<salary[i]<<endl;
	}	
}
int staff::sort(staff s, int n)
{
	int i, j, tid, tsalary;
	string tname;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s.name[i]>s.name[j])
			{
				tname=s.name[i];
				tid=s.staff_id[i];
				tsalary=s.salary[i];
				s.name[i]=s.name[j];
				s.staff_id[i]=s.staff_id[j];
				s.salary[i]=s.salary[j];
				s.name[j]=tname;
				s.staff_id[j]=tid;
				s.salary[j]=tsalary;
			}
		}
	}
	cout<<"\nStaff Details(sorted by name)\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\nStaff ID\t: "<<s.staff_id[i]<<"\nStaff Name\t: "<<s.name[i]<<"\nStaff Salary\t: Rs."<<s.salary[i]<<endl;
	}	
}
int main()
{
	staff s;
	int i, n, ip;
	cout<<"Enter the number of staff to be recorded: ";
	cin>>n;
	s.accept(s,n);
	cout<<"\nSelect the operation to be performed\n";
	cout<<"1. Display Data\n2. Sort Data(by name)\n";
	cin>>ip;
	switch(ip)
	{
		case 1:
			s.display(s, n);
			break;
		case 2:
			s.sort(s, n);
			break;
		default: cout<<"The input is invalid\n";
	}
}
