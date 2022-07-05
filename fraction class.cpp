/*Create a class Fraction to represent a fraction of the type 2/5.
 Overload the 4 arithmetic operators and = = to compare two fraction objects. */
#include <iostream>
using namespace std;
class Fraction{
	public:
		int n, d;
		Fraction(){}
		Fraction(int _n, int _d) {
			n = _n;			 
			d = _d;
		}
		
		Fraction operator+(Fraction);
		Fraction operator-(Fraction);
		Fraction operator*(Fraction);
		Fraction operator/(Fraction);
		bool operator==(Fraction);
		int gcd(int, int);
		void getData();
};

void Fraction::getData(){
	cout << "Enter the numerator : ";
	cin >> n;
	cout << "Enter the denominator : ";
	cin >> d;
}

Fraction Fraction::operator+(Fraction f) {
	int num = n * f.d + d * f.n;
	int den = d * f.d;
	
	return Fraction(num / gcd(num, den), den / gcd(num, den));	
}

Fraction Fraction::operator-(Fraction f) {
	int num = n * f.d - f.n * d;
	int den = d * f.d;
	
	return Fraction(num / gcd(num, den), den / gcd(num, den));	
}

Fraction Fraction::operator*(Fraction f) {
	int num = n * f.n;
	int den = d * f.d;
		
	return Fraction(num / gcd(num, den), den / gcd(num, den));	
}

Fraction Fraction::operator/(Fraction f) {
	int num = n * f.d;
	int den = d * f.n;
	
	return Fraction(num /gcd(num, den), den / gcd(num, den));	
}

bool Fraction::operator==(Fraction f) {
	if(n == f.n && d == f.d) {
		return true;
	} 
	
	return false;
}

int Fraction::gcd(int num, int den) {
	int rem = 0;
	while(den != 0) {
		rem = num % den;
		num = den;
		den = rem;
	} 
	
	return num;
}


int main(){

	Fraction f1;
	Fraction f2;
	Fraction f3;
	
	cout << "Enter the first Fraction : " << endl;
	f1.getData();
	cout << "Enter the second Fraction : " << endl;
	f2.getData();
	
	f3 = f1 + f2;
	cout << "Addition : " << f3.n << " / " << f3.d << endl;
	f3 = f1 - f2;
	cout << "subtraction : " << f3.n << " / " << f3.d << endl;
	f3 = f1 * f2;
	cout << "Multiplication : " << f3.n << " / " << f3.d << endl;
	f3 = f1 / f2;
	cout << "Division : " << f3.n << " / " << f3.d << endl;
	
	if(f1 == f2){
		cout << "Both fractions are equal" << endl;
	} else {
		cout << "Two fractions are not equal" << endl;
	}
	
	
	return 0;
}
