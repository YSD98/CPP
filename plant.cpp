/*Write a C++ program to read information about plant like plant-name, plant-code, plant-type and price. 
Construct the database with suitable member functions for initialization and destroying the data via constructor and destructor.*/
#include<iostream>
using namespace std;
class plant
{
	string pname[20], ptype[20];
	int n, pcode[10];
	float pprice[10];
	public:
		plant()
		{
			cout<<"Constructor called"<<endl;
		}
		int accept()
		{
			cout<<"Enter the number of Plants: ";
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"\nEnter details for Plant #"<<i+1<<endl;
				cout<<"Enter the Plant Name: ";
				cin>>pname[i];
				cout<<"Enter the Plant Code: ";
				cin>>pcode[i];
				cout<<"Enter the Plant Type: ";
				cin>>ptype[i];
				cout<<"Enter Price of the Plant: ";
				cin>>pprice[i];
			}
		}
		int display()
		{
			for(int i=0;i<n;i++)
			{
				cout<<"\nDetails of Plant #"<<i+1<<endl;
				cout<<"Plant Name\t: "<<pname[i]<<"\nPlant Code\t: "<<pcode[i]<<"\nPlant Type\t: "<<ptype[i]<<"\nPlant Price\t: "<<pprice[i]<<endl;
			}
		}
		~plant()
		{
			cout<<"Destructor called"<<endl;
		}
};
int main()
{
	int n;
	plant p;
	p.accept();
	p.display();
}
