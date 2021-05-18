#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define rfo(i, n, a) for (ll i = n; i >= a; i--)
#define m 1000000007
#define pb push_back
#define mp make_pair
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define ff first
#define ss second

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
	// your code goes here
    int N = 4e6 + 5;
    int phi[N], ans[N];
    for (int i = 0; i < N; i++)
    {
        phi[i] = i;
        ans[i] = 0;
    }
    for (int p = 2; p < N; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p - 1;
            for (int i = 2 * p; i < N; i += p)
                phi[i] = (phi[i] / p) * (p - 1);
        }
    }
    for (int i = 1; i < N; i++)
    {
        ans[i] += i - 1;
        for (int j = 2 * i; j < N; j += i)
        {
            ans[j] += i * ((1 + phi[j / i]) / 2);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << ans[4 * k + 1] << "\n";
    }
    return 0;
}