#include <iostream>

using namespace std;

int DeleteEle(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    // If x found in array
    if (i < n)
    {
        // reduce size of array and move all
        // elements on space ahead
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }

    return n;
}
// Another Method...

   /* int id = arr[x];

    for(int i = x ; i<n-1;i++)
    { 
        arr[i]=arr[i+1];
    }
    n--;
    //return 0; */
 

int main()
{
    int arr[]={3,4,2,6,7,1};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Deletion: ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n = DeleteEle(arr,n,6);

    cout<<"After Deletion:  ";

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
