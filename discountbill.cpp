/*Write a C++ program to define a base class Item (item-no, name, price). Derive a class Discounted-Item (discount-percent). 
A customer purchases 'n' items. Display the item-wise bill and total amount using appropriate format.*/
#include<iostream>
using namespace std;
class Item
{
	public:
		int ino[10], i;
		string name[20];
		float price[10];
		int accept(int n)
		{
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter details of item #"<<i+1<<endl;
				cout<<"Item Name: ";
				cin>>name[i];
				cout<<"Item Number: ";
				cin>>ino[i];
				cout<<"Item Price: Rs.";
				cin>>price[i];
			}
		}
};
class Discount:public Item
{
	public:
		float percent[10], disc, total, subt, disprice[10];
		int cal(int n)
		{
			disc=0, total=0, subt=0;
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter the Percentage of Discount on "<<name[i]<<": ";
				cin>>percent[i];
				disprice[i]=price[i]-(price[i]*(percent[i]/100));
			};
			for(i=0;i<n;i++)
			{
				subt += price[i];
				disc += (price[i]*(percent[i]/100));
				total += disprice[i];
			}
		}
};
class Bill:public Discount
{
	public:
		int display(int n)
		{
			cout<<"\nBILL DETAILS\n";
			for(i=0;i<n;i++)
			{
				cout<<"\nITEM NO\t\t: "<<ino[i]<<"\nITEM NAME\t: "<<name[i]<<"\nITEM PRICE\t: Rs."<<price[i];
				cout<<"\nDISCOUNT %\t: "<<percent[i]<<"%\nDISCOUNTED PRICE: Rs."<<disprice[i]<<endl;
			}
			cout<<"\nSUBTOTAL\t: Rs."<<subt<<"\nDISCOUNT\t: Rs."<<disc<<"\nTOTAL\t\t: Rs."<<total;
		}
};
int main()
{
	int n;
	Bill b;
	cout<<"Enter the number of items purchased: ";
	cin>>n;
	b.accept(n);
	b.cal(n);
	b.display(n);
}
