//C++ Program To Swap Two Number Without Using Third Variable
#include <iostream>  
using namespace std;  
int main()  
{  
	int a,b;
	cout<<"Enter two numbers: "; 
	cin>>a>>b;    
	a=a+b;  
	b=a-b;    
	a=a-b;   
	cout<<"After swap a: "<<a<<" b: "<<b<<endl;      
	return 0;  
}
