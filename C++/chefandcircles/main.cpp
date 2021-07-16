#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define fo(i,a,n) for(ll i = a; i<n; i++)
#define rfo(i,n,a) for(ll i = n; i>=a; i--)
#define Mod 998244353
#define MaxS 1000001
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

ll V[MaxS] = {0};

vector<int> c1 , c2;


double distSquare(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcDist(int l, int c1, int c2 )
{
    int inde = 0;

    for (ll i = 0; i < N; i++)
    {
        for (ll j = i + 1; j < N; j++)
        {
            int x1 = c1[i][0], y1 = c1[i][1], r1 = c1[i][2];
            int x2 = c2[j][0], y2 = c2[j][1], r2 = c2[j][2];
            auto dist = distSquare(x1, y1, x2, y2);
            double radSum = r1 + r2;
            double MaxD, minD;

            if(dist > radSum)
            {
                minD = dist - (radSum);
                MaxD = dist + radSum;
            }
            else if(d < abs(r1 - r2))
            {
                if( r1< r2)
                {
                    minD = r2 - dist - r1;
                    MaxD = 2* r2 - maxD;
                }
                else{
                    minD = r1 - dist - r2;
                    MaxD = 2 * r1 - maxD;
                }
            }
            else{
                minD = 0;
                MaxD = radSum + dist;
            }
            c1[inde++] = minD;
            c2[inde++] = MaxD;

            sort(c1.begin(), c1.end());
            sort (c2.begin(), c2.end());
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll Q, N, MinD, MaxD, Max, Min, i, j, M, n,  K;

    cin >> N >> Q;

    circle c[N];
    circle c1,c2;

    for (i = 0; i < N; i++)
    {
        cin >> c[i].x >> c[i].y >> c[i].y;
    }
    double c1 = ((n * (n - 1)) / 2), c2 = ((n * (n - 1)) / 2);

    calcDist(N, v c1, c2);
    while (Q--)
    {
        cin >> K;

        int st = distSquare(c1.begin(), upper_bound(c1.begin(), c1.end(),K));
        int fin = distSquare(c2.begin(), lower_bound(c2.begin(), c2.end(), K));
        cout<<st - fin<<endl;
    }
    return 0;
}
