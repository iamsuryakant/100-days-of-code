#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++


void reverseArr(int a[], int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}

  


// { Driver Code Starts.
int main()
{
    int t;
    //taking testcases
    cin >> t;

    while (t--)
    {
        int n;

       
        cin >> n;

        int arr[n];

        //inserting elements in the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        reverseArr(arr, n);

        //printing the elements of the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}