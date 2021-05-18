#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long int
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define rfo(i, n, a) for (ll i = n; i >= a; i--)
#define m 1000000007
#define pb push_back
#define mp make_pair
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define ff first
#define ss second

struct treenode
{
    int data, level;
    vector<treenode *> child;
    treenode(int x)
    {
        data = x;
        level = 0;
    }
};

vector<pair<int, int>> leaf;

void dfs2(treenode *root)
{
    fo(i, 0, root->child.size())
    {
        treenode *curr = root->child[i];
        dfs2(curr);
    }
    if (root->child.size() == 0)
    {
        leaf.pb({root->level, root->data + 1});
    }
}

void dfs1(treenode *root, int l)
{
    root->level = l;
    fo(i,0,root->child.size())
    {
        treenode *curr = root->child[i];
        dfs1(curr, l+1);
    }
}

void buildtree(treenode *root, vector<vector<int>> &adjacent, vector<bool> &visited)
{
    visited[root->data] = 1;
    fo(i,0,adjacent[root->data].size()){
        if(!visited[adjacent[root->data][i]])
        {
            treenode *t = new treenode(adjacent[root->data][i]);
            root->child.pb(t);

        }
    }

    fo(i,0,root->child.size())
    {
        buildtree(root->child[i], adjacent,visited);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int T; //test case;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;

        vector<vector<int>> adj(N);
        fo(i,0,N-1)
        {
            int u, v;
            cin>>u>>v;
            u--;
            v--;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        treenode *root = new treenode(0);
        vector<bool> visited(N,0);
        buildtree(root,adj,visited);
        dfs1(root,0);

        vector<pair<int, int>> res;

        fo(i,0,root->child.size())
        {
            dfs2(root->child[i]);
            vector<pair<int, int>> v;
            pair<int, int> p;

            bool f = 0;
            sort(leaf.begin(),leaf.end());
             p = leaf[0];
             v.pb(p);

             int value = p.first;
             int j = 1;
             while(j < leaf.size())
             {
                 while(j < leaf.size() && leaf[j].first == value)
                 {
                     if(f)
                        v.pb({p.first + 1,leaf[j].second});
                    else
                        v.pb(leaf[j]);
                    j++;
                 }
             }
             leaf.clear();
             for(auto x:v)
             {
                 res.pb(x);
             }
        }
        sort(res.begin(),res.end());
        int day = res[0].first;
        vector<int> st;

        fo(i,0,res.size())
        {
            if(res[i].first == day)
            {
                st.pb(res[i].second);
            }
            else{
                break;
            }
        }
        cout<<st.size()<<" "<<day<<"\n";
        for(auto x: st)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}