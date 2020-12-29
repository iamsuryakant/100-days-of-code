#include <iostream>

using namespace std;

int SecondLargest(int arr[],int n)
{
    int res = -1;
    int  largest = 0;

    for(int i =1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
                res = i;
        }
    }
    return res;
}

int main()
{
    int arr[]={25,36,27,96,100};
    //SecondLargest(arr,4);
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << SecondLargest(arr,n);
    return 0;
}
