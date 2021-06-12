#include<bits/stdc++.h>

#define ll long long

using namespace std;


void largest(int arr[], int n)
{
    sort(arr, arr + n);

    int count = 0;
    int Lar = arr[n-3];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[n-3])
        {
            count++;
        }
    }
    
    cout<<Lar<<" "<<count<<"\n";
}
int main(){

    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >>arr[i];

    largest(arr,n);

}