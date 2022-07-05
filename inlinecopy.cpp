//Write a C++ program to calculate the value of following series using copy constructor and Inline member function.
#include<iostream>
using namespace std;
class series
{
	int num, sum;
	public:
		series(int n)
		{
			num=n;
		}
		series(const series &s)
		{
			num=s.num;
		}
		int square(int i);
		int sumsq(int sum);
		int display();
};
inline int series::square(int i)
{
	return i*i;
}
inline int series::sumsq(int sq)
{
	return sum+=sq;
}
int series::display()
{
	cout<<"\nThe sum of square from 1 to "<<num<<" is "<<sum;
}
int main()
{
	int n, i, sq, sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	series s1(n);
	series s2=s1;
	for(i=0;i<=n;i++)
	{
		sq=s2.square(i);
		sum=s2.sumsq(sq);
	}
	s2.display();
}
