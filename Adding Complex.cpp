//Write a C++ program to add two complex numbers using operator overloaded by a friend function
#include <iostream>
using namespace std;
class Complex{
    private:
        int num1, num2;
    public:
        Complex(){}
        Complex (int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        friend Complex operator+(Complex c1, Complex c2);
        void display()
        {
            cout << num1 << " + " << num2 << "i" << endl;
        }
};
Complex operator+(Complex c1, Complex c2){
    Complex c;
    c.num1 = c1.num1 + c2.num1;
    c.num2 = c1.num2 + c2.num2;

    return c;
}
int main() {

    int c1, c2, c3, c4;
    cout << "Enter the first complex number c1 and c2 : ";
    cin >> c1 >> c2;

    cout << "Enter the second complex number c3 and c4 : ";
    cin >> c3 >> c4;

    Complex com1(c1, c2);
    Complex com2(c3, c4);
    Complex com3 = com1 + com2;

    com1.display();
    com2.display();
    cout << "Addition of complex numbers : ";
    com3.display();    
    
    return 0;
}
