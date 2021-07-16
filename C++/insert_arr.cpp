#include<iostream>
#include<vector>

using namespace std;

int main()
{

    int n;
    cin>>n;
    
     vector<int> v;

    int inp = 0;

    for(int i = 0; i<n; i++)
    {
        cin>>inp;
        v.push_back(inp);
    }

    int idx;
    cin>>idx;

    int x;

    cin>>x;

   

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