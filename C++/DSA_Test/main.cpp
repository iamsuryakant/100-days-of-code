#include <iostream>

using namespace std;


void reverseArr(int arr[], int n)
{
    int low=0, high = n-1;
    while(low<high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main()
{
   //int arr[5];
   int n;
   cout<<" Enter the number of element: ";
   cin>>n;
   int arr[n];
   cout<<"Enter the Array Elements: "<<endl;
   for(int i =0; i<n;i++)
   {
       cin>>arr[i];
   }

   reverseArr(arr,n);

   cout<<"Array in Reversed array is: "<<endl;

   for(int x : arr)
        cout<< x <<" ";
    return 0;
}
