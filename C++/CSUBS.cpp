#include <bits/stdc++.h>
#include<algorithm>
#define int long long
using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
       // int sum = 0;
        map<int, int>m[k];

        for(int i = 0; i<n; i++)
        {
            int num;
            cin>> num;
            m[i%k][num]++;
        }
         int res = 0;

         for(int i = 0; i < k; i++)
         {
             int sum = 0, maxi = -1;

             for(auto [num, cnt] : m[i]){
                 sum += cnt;
                 maxi = max(maxi,cnt);
             }
             res += sum-maxi;
         }
         cout<<res<<"\n";

    }
    return 0;
}