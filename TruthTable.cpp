//C++ Program Print Truth Table Of XY+Z Using Loop

#include <iostream>

using namespace std;

int main()
{
	cout << "x\ty\tz\txy+z" << endl;
	for(int x = 0; x <= 1; x++)
	{
		for(int y = 0; y <= 1; y++)
		{
			for(int z = 0; z <= 1; z++)
			{
				if(x * y + z == 2)
				{
					cout << endl << x << "\t" << y << "\t" << z << "\t" << "1"; 
				} else {
					cout << endl << x << "\t" << y << "\t" << z << "\t" << x * y + z << endl;
				}
			}	
		}
	}
	return 0;
}
