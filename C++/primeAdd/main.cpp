#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define fo(i,a,n) for(ll i = a; i<n; i++)
#define rfo(i,n,a) for(ll i = n; i>=a; i--)
#define Mod 998244353
#define MaxS 1000001
#define pb push_back
#define mp make_pair
#define ff first
#define ss second


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, H, x, cnt = 0;
    //vector<long long> ar;

    while(N--)
    {
        ll T;
        cin>>T;
        if(H == x+T)
        {
            cnt = 1;
        }
    }

    if(cnt == 1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
