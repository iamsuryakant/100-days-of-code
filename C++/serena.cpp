#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    int even = 0, odd = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even += arr[i];
        }
        else{
            odd += arr[i];
        }

    }
    cout<<"The sum of the even numbers in the array is "<<even<<endl;
    cout<<"The sum of the odd numbers in the array is "<<odd<<endl;
    

    return 0;
}