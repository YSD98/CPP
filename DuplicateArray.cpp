//Program for Remove Duplicates Items in array

#include <iostream>

using namespace std;

int main()
{
    int n;
 
    cout << "Enter the size : ";
    cin >> n;
 
    int arr[n];
 
    cout<<"Enter the elements : " << endl;
 
    for(int i = 0 ; i < n ; i++)
    {
        cin>> arr[i];
    }
 
    for(int i=0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(arr[i] == arr[j])
            {
				for(int k = j ; k < n ; k++)
				{
                    arr[k] = arr[k+1];
                }
    
                n--;
                j--;
            }
        }
    }
 
    cout<<"After removing duplicate elements : " << endl;
 
    for(int i = 0 ; i < n ; i++) {
    	cout << arr[i] << "\t";
    }
 
    return 0;
}
