//C++ Program To Find Area And Circumference Of Circle
#include<iostream>
using namespace std;
int main() 
{
   float radius, area_circle,circum;
   cout << "Enter the radius of circle: ";
   cin >> radius;
   area_circle = 3.14 * radius * radius;
   circum = 2 * 3.14 * radius;
   cout << "Area of circle: " << area_circle << endl;
   cout << "Circumference of circle: " << circum << endl;
   return 0;
}
