//C++ Program To Check Number Is Positive Or Negative
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num >= 0)
        cout << num << " is a positive";
    else 
        cout << num << " is a negative";
    return 0;
}
