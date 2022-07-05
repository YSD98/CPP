/*Create two classes dist1(meters, centimeters) and dist2(feet, inches). 
Accept two distances from the user, one in meter and centimeter and other in feet and inches. 
Find the sum and differences of the two distances. 
Display the result in, meters and centimeters as well as feet and inches (using friend function). (1 inch = 2.54 cm and 1 feet = 0.30 m)*/
#include<iostream>
using namespace std;
class dist2;
class dist1{
	public:
	float m, cm;
	public:
		int accept()
		{
			cout<<"Enter Distance in Meter and Centimeter: ";
			cin>>m>>cm;
		}
		int sum(dist1 d1, dist2 d2);
		int difference(dist1 d1, dist2 d2);
};
class dist2{
	public:
	float ft, inc;
	public:
		int accept()
		{
			cout<<"Enter Distance in Feet and Inches: ";
			cin>>ft>>inc;
		}
		int sum(dist1 d1, dist2 d2);
		int difference(dist1 d1, dist2 d2);
};
int sum(dist1 d1, dist2 d2)
{
	int cmm, cft, cinc, sum, mtr, c, feet, inch;
	cmm = d1.m*100;
	cinc = d2.inc*2.54;
	cft = d2.ft*30.48;
	sum = ((d1.cm + cmm) + (cinc + cft));
	mtr = sum/100;
	c = sum%100;
	cout<<"\nSum:\n";
	cout<<"\n-In Meters and Centimeters\t: "<<mtr<<" mtrs and "<<c<<" cms\n";
	inch = sum/2.54;
	feet = inch/12;
	inch -= (feet*12);
	cout<<"\n-In Feet and Inches\t\t: "<<feet<<" feet and "<<inch<<" inches\n";
}
int difference(dist1 d1, dist2 d2)
{
	int cmm, cft, cinc, dif, mtr, c, feet, inch;
	cmm = d1.m*100;
	cinc = d2.inc*2.54;
	cft = d2.ft*30.48;
	dif = ((d1.cm + cmm) - (cinc + cft));
	mtr = dif/100;
	c = dif%100;
	cout<<"\nDifference:\n";
	cout<<"\n-In Meters and Centimeters\t: "<<mtr<<" mtrs and "<<c<<" cms\n";
	inch = dif/2.54;
	feet = dif/30;
	inch -= (feet*12);
	cout<<"\n-In Feet and Inches\t\t: "<<feet<<" feet and "<<inch<<" inches\n";
}
int main()
{
	dist1 d1;
	dist2 d2;
	d1.accept();
	d2.accept();
	sum(d1,d2);
	difference(d1,d2);
}
