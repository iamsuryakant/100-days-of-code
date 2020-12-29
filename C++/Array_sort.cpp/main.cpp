#include <iostream>

using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i=1; i<n; i++)
        if(arr[i]<arr[i-1])
            return false;
        return true;
}
int main()
{
    int arr[]={25,27,36,96,100};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout << isSorted(arr,n);
    return 0;
}
