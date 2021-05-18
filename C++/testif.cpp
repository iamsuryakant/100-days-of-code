#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define rfo(i, n, a) for (ll i = n; i >= a; i--)
#define M 998244353
#define pb push_back
#define mp make_pair
#define ff first

ll repeated_string(string s, long l) {
    long count = 0;
    if (l > s.size())
    {
        long num = l / s.size();
        long reml = l % s.size();

        long i = 0;
        for(long i = 0; i< s.size()- l; i++ )
        {
            if (s[i] != s[i+l])
            {
                count++;
            }
            //i++;
        }

        count = count * num;

        i = 0;
        while (i < reml)
        {
            if (s[i] == 'a')
            {
                count++;
            }
            i++;
        }
    }
    else
    {
        long i = 0;
        while (i < l)
        {
            if (s[i] == 'a')
            {
                count++;
            }
            i++;
        }
    }
    return count;
}

int main()
{
    string str;
    long x;

    cin >> str;
    cin >> x;

    cout << repeated_string(str, x) << "\n";

    return 0;
}