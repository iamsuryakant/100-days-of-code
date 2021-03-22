#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define fo(i,a,n) for(ll i = a; i<n; i++)
#define rfo(i,n,a) for(ll i = n; i>=a; i--)
#define M 998244353
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,L,R;

    cin>>t;
    while(t--)
    {
        ll count = 0;
        cin>>L>>R;
        for(i = L; i<= R; i++)
        {
            if(i%10 == 2 || i%10 == 3 || i%10 == 9)
                count++;
        }
        cout<<count<<endl;
    }

}
