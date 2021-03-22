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
    ll t,N,i,j,P,Q;

    cin>>t;
    while(t--)
    {
        cin>>N;
       if(N%2 == 0)
       {
            Q = N - N/2;
       }
       else{

        Q = N - (N/2 + 1 );
       }
       cout<<1<<" "<<1;

       for(i = 0; i<Q; i++)
       {
           cout<<0;
       }
       cout<<endl;

    }

}
