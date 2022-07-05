//Write a C++ program to overload '+' operator to concatenate two strings.
#include <iostream>
using namespace std;
class Concatenate{
    private:
        string str;
    public:
        Concatenate(string s){
            str = s;
        }

        Concatenate operator+(Concatenate);

        void display() {
            cout << "Concate : " << str << endl;
        }
};
Concatenate Concatenate::operator+(Concatenate st){
    return str + st.str;
}
int main() 
{
    string str1, str2;
    cout << "Enter the string 1 : ";
    cin >> str1;
    cout << "Enter the string 2 : ";
    cin >> str2;
    Concatenate con1(str1);
    Concatenate con2(str2);
    Concatenate con3 = con1 + con2;
    con3.display();
    return 0;
}
