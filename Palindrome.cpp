//C++ Program To Find Whether A Number Is Palindrome Or Not

#include <iostream>

using namespace std;

int main()
{
	int n, rev, t;
	cout << "Enter the number : ";
	cin >> n;
	t = n;
	while(n > 0)
	{
		int rem = n % 10;
		rev = (rev * 10) + rem;
		n /= 10;
	}
	
	cout << "Reverse number : " << rev << endl;;
	
	if(rev == t)
	{
		cout << t << " is a palindrome";
	} else {
		cout << t << " is not a palindrome";
	}
	
	return 0;
}
