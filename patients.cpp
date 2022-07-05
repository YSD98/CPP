/*Create a base class Patient (pat-name, age, sex) and IPD (ward-no, bed-no, charge-per-day).
Derive a class IPD-patient from these two base classes with no-of-days-admitted attribute.*/
#include<iostream>
using namespace std;
class Patient
{
	string pname, sex;
	int age;
	public:
		int pdetails()
		{
			cout<<"Enter Patient's Name: ";
			cin>>pname;
			cout<<"Enter Patient's Age: ";
			cin>>age;
			cout<<"Enter Patient's Sex: ";
			cin>>sex;
	 }
		int pdisplay()
		{
			cout<<"Patient Name\t: "<<pname<<"\nPatient Age\t: "<<age<<"\nPatient Sex\t: "<<sex;
		}
};
class IPD
{
	int ward, bed;
	float charge;
	public:
		int ipdetails()
		{
			cout<<"Enter Ward No: ";
			cin>>ward;
			cout<<"Enter Bed No: ";
			cin>>bed;
			cout<<"Enter the charge/day: Rs.";
			cin>>charge;
		}
		int getcharge()
		{
			return charge;
		}
		int ipdisplay()
		{
			cout<<"\nWard Number\t: "<<ward<<"\nBed Number\t: "<<bed<<"\nCharge per Day\t: Rs."<<charge;
		}
};
class IPD_Patient:public Patient, public IPD
{
	int days;
	public:
		int admitted()
		{
			cout<<"Enter the number of days admitted: ";
			cin>>days;
		}
		int display()
		{
			pdisplay();
			ipdisplay();
			cout<<"\nDays Admitted\t: "<<days<<endl;
			cout<<"Total Charge\t: Rs."<<getcharge()*days<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter the number of patients: ";
	cin>>n;
	IPD_Patient ip[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nDetails of Patient #"<<i+1<<endl;
		ip[i].pdetails();
		ip[i].ipdetails();
		ip[i].admitted();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\nDETAILS OF PATIENT #"<<i+1<<endl;
		ip[i].display();
	}
}
