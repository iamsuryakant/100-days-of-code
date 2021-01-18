#include<iostream>

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
    int arr[] ={1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    reverseArr(arr, n);

    cout<<"The array in reverse order: "<<endl;

    for(int i= 0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
