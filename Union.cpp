//C++ Program To Find The Union And Intersection Of Two Sorted Array In Increasing Order.

#include <iostream>

using namespace std;

int main()
{
	int size1, size2;
	cout << "Enter the size of first array : ";
	cin >> size1;
	
	int arr1[size1], arr2[size2];
	cout << "Enter the elements in first array : " << endl;
	for(int i = 0; i < size1; i++)
	{
		cin >> arr1[i];
	}
	
	cout << "Enter the size of second array : ";
	cin >> size2;
	
	cout << "Enter the elements in second array : " << endl;
	for(int i = 0; i < size2; i++)
	{
		cin >> arr2[i];
	}
	
	cout << "Union array : "<< endl;
	int i = 0, j = 0;
	while(i < size1 && j < size2)
    {
    	if(arr1[i] < arr2[j]) {
    		cout<<arr1[i++] <<" ";	
		}	
     	else if(arr1[i] > arr2[j]) {
     		cout << arr2[j++] <<" " ;		
		}
      	else
     	{
       		cout << arr1[i++]<<" ";
       		j++;
     	}	  
    }
   
   	while(i < size1) {
   		cout << arr1[i++]<<" ";
	}
    	
   	while(j < size2) {
   		cout << arr2[j++]<<" ";
	}
    	
    int m = 0, n = 0;
    cout << endl <<"Intersection Of Array : " << endl;
    while(m < size1 && n < size2)
    {
        if(arr1[m] < arr2[n])
        {
          m++;
        }
        else if(arr1[m] > arr2[n]){
          n++ ;
        }
        else
        {
          cout << arr1[m++]<<" ";
          n++;
        }  
    }
    
	return 0;
}
