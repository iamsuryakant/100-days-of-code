#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello Everyone!";

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count  = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            int x = arr[i];
            int y = arr[i + 1];
            //int count = 0;

            if (abs(x - y) == 1)
            {
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}