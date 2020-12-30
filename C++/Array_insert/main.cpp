#include <iostream>

using namespace std;

int InsertEle(int arr[], int n, int x, int cap, int pos)
{
    if(n == cap)
        return n;
    int idx = pos - 1;
    for(int i = n-1; i>=idx; i--)
        arr[i+1]=arr[i];
    arr[idx]=x;
    //n++;


    return n+1;
}
int main()
{
    int arr[]={3,4,2,6,7,1};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Insertion: ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    InsertEle(arr,n,45,10,5);

    cout<<"After Insertion ";

    for(int i = 0; i<n+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
