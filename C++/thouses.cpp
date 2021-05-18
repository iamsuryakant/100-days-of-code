#pragma GCC optimize("Ofast", "unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define int long long
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define rfo(i, n, a) for (ll i = n; i >= a; i--)
#define m 998244353
#define pb push_back
#define mp make_pair
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define ff first
#define ss second
using pa = pair<int , int>;
template<typename T>
using Prior = priority_queue<T>;
template<typename T>
using prior = priority_queue<T, vector<T>, greater<T>>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

inline int getRand(int L, int R){
    if(L>R)swap(L,R);
    return(int)(rng()%(uint64_t)(R-L+1)+L);
}
template<typename T1, typename T2>
ostream& operator<<(ostream &os, pair<T1,T2>p){
    os<<"("<<p.first<<","<<p.second<<")";
    return os;
}

template<typename T>
ostream& operator <<(ostream &os, vector<T> v){
    for(int i = 0; i<v.size(); ++i)
    {
        if(i) os <<" ";
        os<< v[i];
    }
    return os;

}

const int MaxN = 3E5 +5;
const int Md = 1E9 + 7;

vector<int> adj[MaxN], val1, val2;
vector<pa> pii;

void dfs(int now, int l = -1){
    for(auto x:adj[now]){
        if(x == l)continue;
        dfs(x,now);
    }
    pii.clear();

    for(auto x:adj[now]){
        if(x != l)pii.emplace_back(val1[x],x);
    }
    sort(RALL(pii));

    int tk = 1;
    for(auto [_val2, id]:pii) val2[id] = tk++;
    for(auto x:adj[now]){
        if(x != l)val1[now] += val2[x]* val1[x];
    }
}

void solve(){
    int N, X;
    cin>>N>>X;

    val1.assign(N, 1), val2.assign(N,0);

    for(int i =0; i<N; ++i)vector<int>().swap(adj[i]);

    for(int i = 0; i<N-1; ++i)
    {
        int u,v;
        cin>>u>>v;
        --u, --v;
    }

    dfs(0);

    cout<<val1[0]%Md * X % Md <<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin>>t;
    for(int _= 1; _<= t; ++_){
        solve();
    }
    return 0;
}
