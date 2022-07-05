/*Write a C++ program to find the area of circle using class circle which have following details:
		a. Accept radius from the user
		b. Calculate the area
		c. Display the result*/
#include<iostream>
#include<cmath>
using namespace std;
class circle
{
	float r, a;
	public:
		int accept()
		{
			cout<<"Enter the value of radius: ";
			cin>>r;
		}
		int area()
		{
			a=M_PI*pow(r,2);
		}
		int display()
		{
			cout<<"\nArea of the circle is: "<<a;
		}
};
int main()
{
	circle c;
	c.accept();
	c.area();
	c.display();
}
