#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define rfo(i, n, a) for (ll i = n; i >= a; i--)
#define M 998244353
#define pb push_back
#define mp make_pair
#define ff first
#define ss second


int repeatedString(string s, int x)
{
    int count = 0;
    int n = s.length();

    for(int i = 1; i < n - x; i++)
    {
        if(s[i] == s[i+x])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int x;

    cin>>s>>x;

    cout<<repeatedString(s,x);

    
}