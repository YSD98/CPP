/* Write a C++ program to define a class employee having members 
Emp-id, Emp-name, basic salary and functions accept() and display(). 
Calculate DA=25% of basic salary, HRA=800, I-tax=15% of basic salary. 
Display the payslip using appropriate output format.*/
#include<iostream>
#include<string>
using namespace std;
class employee{
	float bsal, hra, itax, da, netsal;
	int emp_id;
	string emp_name;
	public:
		int accept();
		int display();
};
int employee::accept()
		{
			cout<<"Enter Employee ID: ";
			cin>>emp_id;
			cout<<"Enter Employee name: ";
			cin>>emp_name;
			cout<<"Enter Employee's Basic Salary: ";
			cin>>bsal;
			hra=800;
			da=(25*bsal)/100;
			itax=(15*bsal)/100;
			netsal=bsal+da+hra-itax;
		}
int employee::display()
		{
			cout<<"\nEMPLOYEE PAYSLIP\n";
			cout<<"\nEmployee ID\t: "<<emp_id<<"\nEmployee Name\t: "<<emp_name<<"\nBasic Salary\t: Rs."<<bsal;
			cout<<"\nHRA\t\t: Rs."<<hra<<"\nDA\t\t: Rs."<<da<<"\nI-Tax\t\t: Rs."<<itax<<"\nNet Salary\t: Rs."<<netsal<<endl;
		}
int main()
{
	employee payslip;
	payslip.accept();
	payslip.display();
}
