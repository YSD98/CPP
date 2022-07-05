//C++ Program For Denomination of an Amount Using While Loop

#include <iostream>

using namespace std;

int main()
{
	int amount, n_2k = 0, n_500 = 0, n_200 = 0, n_100 = 0, n_50 = 0, n_20 = 0, n_10 = 0, c_5 = 0, c_2 = 0, c_1 = 0;
	int count = 0;
	
	cout << "Enter the amount = ";
	cin >> amount;
	
	while(amount >= 2000)
	{
		n_2k = amount / 2000;
		amount %= 2000;
		cout << "Total no. of 2000 rupees note : " << n_2k << endl;
		break;
	}
	
	while(amount >= 500)
	{
		n_500 = amount / 500;
		amount %= 500;
		cout << "Total no. of 500 rupees note : " << n_500 << endl;
		break;
	}
	
	while(amount >= 200)
	{
		n_200 = amount / 200;
		amount %= 200;
		cout << "Total no. of 200 rupees note : " << n_200 << endl;
		break;
	}
	
	while(amount >= 100)
	{
		n_100 = amount / 100;
		amount %= 100;
		cout << "Total no. of 100 rupees note : " << n_100 << endl;
		break;
	}
	
	while(amount >= 50)
	{
		n_50 = amount / 50;
		amount %= 50;
		cout << "Total no. of 50 rupees note : " << n_50 << endl;
		break;
	}
	
	while(amount >= 20)
	{
		n_20 = amount / 20;
		amount %= 20;
		cout << "Total no. of 20 rupees note : " << n_20 << endl;
		break;
	}
	
	while(amount >= 10)
	{
		n_10 = amount / 10;
		amount %= 10;
		cout << "Total no. of 10 rupees note : " << n_10 << endl;
		break;
	}
	
	while(amount >= 5)
	{
		c_5 = amount / 5;
		amount %= 5;
		cout << "Total no. of 5 rupees coin : " << c_5 << endl;
		break;
	}
	
	while(amount >= 2)
	{
		c_2 = amount / 2;
		amount %= 2;
		cout << "Total no. of 2 rupees coin : " << c_2 << endl;
		break;
	}
	
	while(amount >= 1)
	{
		c_1 = amount / 1;
		amount %= 1;
		cout << "Total no. of 1 rupees coin : " << c_1 << endl;
		break;
	}
	
	count = n_2k + n_500 + n_200 + n_100 + n_50 + n_20 + n_10 + c_5 + c_2 + c_1;
	cout << "Total no. of notes and coins : " << count << endl;
	return 0;
}
