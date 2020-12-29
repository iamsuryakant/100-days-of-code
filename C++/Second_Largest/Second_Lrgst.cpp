#include<iostream>

using namespace std;

bool SecondLargest(int arr[], int n)
{
    for(int i = 1; i<n; i++)
    {
        if(arr[i]=arr[i-1])
            return false;
    }
    return true;
}
int main()
{
    int arr[]={25,36,27,96,100};
    //SecondLargest(arr,4);
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << SecondLargest(arr,n);
    return 0;
}
