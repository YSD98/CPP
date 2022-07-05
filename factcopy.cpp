//Write a C++ program to find the factorial of a number using copy constructor.
#include<iostream>
using namespace std;
class fact
{
	int f, n;
	public:
		fact(int num)
		{
			n=num;
		}
		fact(fact &f)
		{
			n=f.n;
		}
		int calculate();
		void address();
};
int fact::calculate()
{
	f=1;
	for (int i=1;i<=n;i++)
		f *= i;
	return f;
}
void fact::address()		
{
	cout<<"\nAt address: "<<&n<<endl;
}
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	fact f(num);
	fact copy=f;
	f.address();
	cout<<"The factorial of "<<num<<" is "<<f.calculate()<<endl;
	copy.address();
	cout<<"The factorial of "<<num<<" is "<<copy.calculate()<<endl;
}
