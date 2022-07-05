/*Create a C++ class for player object with the following attributes player no., name, number of matches and number of goals done in each match. 
The number of matches varies for each player. Write parameterized constructor which initializes player no., name, number of subjects 
and creates array for number of goals and number of matches dynamically.*/
#include<iostream>
using namespace std;
class player
{
	int pno, matches, goals[10];
	string name;
	public:
		player(string n, int p, int m, int g[10])
		{
			name=n;
			pno=p;
			matches=m;
			for(int i=0;i<m;i++)
				goals[i]=g[i];
		}
		int display();
};
int player::display()
{
	cout<<"\nDETAILS OF PLAYER"<<endl;
	cout<<"PLAYER NAME\t\t: "<<name<<"\nPLAYER NUMBER\t\t: "<<pno<<"\nMATCHES PLAYED\t\t: "<<matches<<endl;
	for(int j=0;j<matches;j++)
		cout<<"GOALS SCORED IN MATCH #"<<j+1<<": "<<goals[j]<<endl;
}
int main()
{
	string n;
	int p, m, g[10];
		cout<<"Enter Details of Player"<<endl;
		cout<<"Enter Player Name: ";
		cin>>n;
		cout<<"Enter Player Number: ";
		cin>>p;
		cout<<"Enter the Number of Matches played: ";
		cin>>m;
		for(int j=0;j<m;j++)
		{
			cout<<"Enter the Number of Goals scored in Match #"<<j+1<<": ";
			cin>>g[j];
		}
	player stats(n, p, m, g);
	stats.display();
}
