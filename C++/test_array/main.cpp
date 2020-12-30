#include <iostream>

using namespace std;

int getLargest(int arr[], int n)
{
    int res = 0;

    for(int i = 1;i < n; i++)
    {
        if(arr[i]>arr[res])

            res = i;
    }
    return res;
}
int main()
{
    int arr[] = {2,5,8,20,13};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<getLargest(arr,n);

    return 0;
}
