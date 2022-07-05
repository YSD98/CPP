//C++ Program To Find The HCF Or LCM Of Two Number Using If/Else Statements

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, hcf, count = 1;;
	cout << "Enter the num1 : ";
	cin >> num1;
	cout << "Enter the num2 : ";
	cin >> num2;
	
	while(count <= num1 && count <= num2)
	{
		if(num1 % count == 0 && num2 % count == 0)
		{
			hcf = count; 
		}
		
		count++;
	}
	
	cout << "HCF of " << num1 << " and " << num2 << " : " << hcf << endl;
	
	return 0;
}
