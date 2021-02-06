#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> vect;

    int inp =0 ;

    for(int i =0 ; i < n; i++)
    {
        cin>>inp;
        vect.push_back(inp);
    }

    int sum = 0;

    for(int i =0;i<n;i++)
    {
        sum = sum + vect[i];
    }

    cout<<sum;

}