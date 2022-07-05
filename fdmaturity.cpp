/*Write a C++ program to create a class FD a/c which contains member (fdno, name, amt, interest rate, maturity amt & No. of months). 
Write parameterized constructor where interest rate should be default argument. 
Calculate maturity amt using interest rate & display all the details.  P * (1+R/100)^T   */
#include<iostream>
#include<cmath>
using namespace std;
class fdac
{
	int fdno, fdm;
	float fdamt, fdr, mat, y;
	string fdname;
	public:
		fdac(int no, string name, float amt, int m, float r=5.5)
		{
			fdno=no;
			fdname=name;
			fdamt=amt;
			fdm=m;
			fdr=r;
		}
		int maturity();
		int display();
		
};
int fdac::maturity()
{
	
	y=fdm/12;
	mat= fdamt * pow((1+fdr/100), y);
}
int fdac::display()
{
	cout<<"\nNAME\t\t\t: "<<fdname<<"\nFD Number\t\t: "<<fdno<<"\nPrincipal Amount\t: Rs."<<fdamt<<"\nRate of Interest\t: "<<fdr<<endl;
	cout<<"No. of Months\t\t: "<<fdm<<"\nMaturity Amount\t\t: Rs."<<mat<<endl;
}
int main()
{
	int no, m;
	string name;
	float amt;
	
	cout<<"Enter the FD number: ";
	cin>>no;
	cout<<"Enter the Name: ";
	cin>>name;
	cout<<"Enter the principal amount: ";
	cin>>amt;
	cout<<"Enter the number of months: ";
	cin>>m;
			
	fdac f(no, name, amt, m);
	f.maturity();
	f.display();
}
