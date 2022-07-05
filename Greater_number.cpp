//C++ Program To Find Greater No. Among given Three Number
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout <<"Put any three numbers: ";
	cin>>x;
	cin>>y;
	cin>>z;
	if(x>=y && x>=z) 
	{
		cout<<"The Largest number is: "<<x;
	}
	if(y>=x && y>=z) 
	{
		cout<<"The Largest number is: "<<y;
	}
	if(z>=x && z>=y) 
	{
		cout<<"The Largest number is: "<<z;
	}
	return 0;
}
