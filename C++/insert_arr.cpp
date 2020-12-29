#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int idx;
    cin>>idx;

    int n;
    cin>>n;

    int x;

    cin>>x;

    vector<int> v;

    int inp = 0;

    for(int i = 0; i<n; i++)
    {
        cin>>inp;
        v.push_back(inp);
    }

    for(int i = v.size();i>idx;i--)
    {
        v[i]=v[i-1];
    }

    v[idx]=x;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
}