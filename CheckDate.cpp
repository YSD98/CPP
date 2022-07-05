//C++Program To Check Date Validation (Valid Or Not) Using If/Else Statements

#include <iostream>

using namespace std;

int main()
{
    int dd,mm,yy;
     
	cout << "Enter the date : ";
	cin >> dd;
	cout << "Enter the month : ";
	cin >> mm;
	cout << "Enter the year : ";
	cin >> yy;
     
    if(yy>=1900 && yy<=9999)
    {
        if(mm>=1 && mm<=12)
        {
            
            if((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
            {
            	cout << dd << "/" << mm << "/" << yy << " is valid." << endl;
			}
            else if((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
            {
            	cout << dd << "/" << mm << "/" << yy << " is valid." << endl;
			}   
            else if((dd >= 1 && dd <= 28) && (mm == 2))
            {
            	cout << dd << "/" << mm << "/" << yy << " is valid." << endl;
			}    
            else if(dd == 29 && mm == 2 && (yy % 400 == 0 ||(yy % 4 == 0 && yy % 100 != 0)))
            {
            	cout << dd << "/" << mm << "/" << yy << " is valid." << endl;
			}   
            else
            {
            	cout << dd << "/" << mm << "/" << yy << " is invalid." << endl;
			}   
        }
        else
        {
            cout << dd << "/" << mm << "/" << yy << " is invalid." << endl;
        }
    }
    else
    {
        cout << dd << "/" << mm << "/" << yy << " is invalid." << endl;
    }
 
    return 0;    
}
