#include <iostream>
using namespace std;
#define ll long long 
int main() {
	// your code goes here
	ll t;
	cin>>t;
	
	while(t--)
	{
	    ll n; cin>>n;
	    ll sum = 0;
	    ll a[n];
	    
	    for(ll i = 0; i<n; i++)
	        cin>>a[i];
	    for(ll i = 0; i<n; i++)
	    {
	        sum += a[i];
	    }
	    if(sum % 2 == 0)
	        cout<<1<<"\n";
	    else cout<<2<<"\n";
	}
	return 0;
}