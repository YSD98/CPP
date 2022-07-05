/*
Create a class Time which contains:
   
        - Hours
        - Minutes
        - Seconds

    Write a C++ program using operator overloading for the following:
               
        1.  = = : To check whether two Time are same or not.
        2.  >>  : To accept the time.
        3.  <<  : To display the time
*/

#include <iostream>

using namespace std;

class Time{
    private:
        int hours, mins, secs;
    public:
        Time(){}
        void accept();
        void display();
        bool operator==(Time);
        ~Time(){}
};

void Time::accept() {
    cout << "Enter the Hours : ";
    cin >> hours;
    cout << "Enter the minitues : ";
    cin >> mins;
    cout << "Enter the secounds : ";
    cin >> secs;
}

void Time::display(){
    cout << hours << " : " << mins << " : " << secs << endl;
}

bool Time::operator==(Time time) {
    if(hours == time.hours && mins == time.mins && secs == time.secs) {
        return  true;
    }

    return false;
}

int main(){
 
    Time t1, t2;
    cout << "Enter the first time " << endl;
    t1.accept();
    cout << "Enter the second time " << endl;
    t2.accept();

	cout << "Time 1 : ";
    t1.display();
    cout << "Time 2 : ";
    t2.display();

    if(t1 == t2) {
        cout << "\nBoth times are same." << endl;
    } else
        cout << "\nTime 1 and Time 2 are not same" << endl;

    return 0;
}
