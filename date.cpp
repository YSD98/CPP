/*Create a C++ class Date which contains:
   - Day
   - Month
   - Year
Write necessary member functions to accept and display a date using  >> and << operators.*/
#include<iostream>
using namespace std;
class date{
	int d, m, y;
	public:
		int accept();
		int display();
};
int date::accept()
{
	cout<<"Enter Day: ";
	cin>>d;
	cout<<"Enter Month: ";
	cin>>m;
	cout<<"Enter Year: ";
	cin>>y;
}
int date::display()
{
	cout<<"\nThe Date is: ";
	if(y>0)
	{
		if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
			cout<<d<<"/"<<m<<"/"<<y<<endl;
		else if((m==4 || m==6 || m==9 || m==11) && (d>=1 && d<=30))
			cout<<d<<"/"<<m<<"/"<<y<<endl;
		else if(m==2)
		{
			if(y%4==0 &&(y%100!=0 || y%400==0) && (d>=1 && d<=29))
				cout<<d<<"/"<<m<<"/"<<y<<endl;
			else if(d>=1 && d<=28)
				cout<<d<<"/"<<m<<"/"<<y<<endl;
			else
				cout<<"INVALID"<<endl;;
		}
		else
			cout<<"INVALID"<<endl;
	}
	else
		cout<<"INVALID"<<endl;
}
int main()
{
	date d;
	d.accept();
	d.display();
}
