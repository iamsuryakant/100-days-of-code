#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define fo(i,a,n) for(ll i = a; i<n; i++)
#define rfo(i,n,a) for(ll i = n; i>=a; i--)
#define m 998244353
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int64_t main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
	    ll N, M;
	    
	    cin>>N>>M;
	    int count = 0;
	    
	    for(ll a = 1; a<=N; a++)
	    {
	        for(ll b = a+1; b <= N; b++)
	        {
	            if((M%a)%b == (M%b)%a)
	            {
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}