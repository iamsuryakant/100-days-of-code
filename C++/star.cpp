#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int k = i; k<n; k++)
        {
            cout <<" ";
        }
        for(int j = 1;j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}