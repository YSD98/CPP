/*
Consider a class Matrix    

Class Matrix
{
    int a[3][3];
    Public:
       //methods;
};

Overload the - (Unary) should negate the numbers stored in the object
*/

#include <iostream>

using namespace std;

class Matrix{
	private:
		int a[3][3];
	public:
		void getData();
		void show();
		void operator-();		
};

void Matrix::getData(){
	cout << "Enter the elements : " << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << "Enter the value for a["<<i<<"]["<<j<<"] : ";
			cin >> a[i][j];
		}
	}
}

void Matrix::show(){
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

void Matrix::operator-(){
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			a[i][j] = -a[i][j];
		}
	}
}

int main(){
	Matrix m;
	m.getData();
	-m;
	cout << "\nNegative Matrix : " << endl;
	m.show();
	return 0;
}
