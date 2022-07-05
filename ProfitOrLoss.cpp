//C++ Program To Determine Whether The Seller Made Profit or Loss. Also, Determine How Much Profit or Loss He Made

#include <iostream>

using namespace std;

int main()
{
	int costPrice, sellingPrice, profit, loss;
	cout << "Enter the cost price : ";
	cin >> costPrice;
	cout << "Enter the selling price : ";
	cin >> sellingPrice;
	
	profit = sellingPrice - costPrice;
	loss = costPrice - sellingPrice;
	
	if(sellingPrice > costPrice)
	{
		cout << "profit : " << profit << endl;
	} else if(sellingPrice < costPrice) {
		cout << "Loss : " << loss << endl;
	} else {
		cout << "No profit No loss" << endl;
	}
	
	return 0;
}
