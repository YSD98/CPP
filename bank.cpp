/*Define a class to represent a bank account. Include the following members:

	Data members:
	1) Name of the depositor
	2) Account number
	3) Type of account
	4) Balance amount in the account.

	Member functions:
	1) To assign initial values
	2) To deposit an amount
	3) To withdraw an amount after checking the balance
	4) To display name and balance.

	Write a main program to test the program.*/
#include<iostream>
using namespace std;
class bank{
	string name, type;
	int ac, ip;
	float bal;
	public:
		int accept()
		{
			cout<<"Enter Name: ";
			getline(cin, name);
			cout<<"Enter Account Number: ";
			cin>>ac;
			cout<<"Enter the Type of Account: ";
			cin>>type;
			cout<<"Enter Balance Amount: Rs.";
			cin>>bal;
		}
		int operation();
		int display();
};
int bank::operation()
		{
			float d, w;
			cout<<"\nSelect an operation to be performed\n";
			cout<<"1. Deposit\n2. Withdraw\n";
			cin>>ip;
			if(ip==1)
			{
				cout<<"Enter the amount to be deposited: Rs.";
				cin>>d;
				bal=bal+d;
			}
			else if(ip==2)
			{
				cout<<"Enter the amount to be withdrawn: Rs.";
				cin>>w;
				bal=bal-w;
			}
			else
				cout<<"The input is invalid\n";
		}
int bank::display()
{
	cout<<"\nAccount Details\n";
	cout<<"Name\t\t: "<<name<<"\nAccount Number\t: "<<ac<<"\nType of Account\t: "<<type<<"\nAccount Balance\t: Rs."<<bal;
}
int main()
{
	bank b;
	b.accept();
	b.operation();
	b.display();
}
