#include <bits/stdc++.h>
#include<algorithm>
 #define int long long
using namespace std;

void minimumAdd(vector<int> vec, int n,int k)
{
   // vector<int> v;
    int sum = 0, average;
   // int count = 0;
   for(int i = 0; i < n; i++)
   {
       sum += vec[i];
   }
   
    average = (sum)/(k+1);
    average++;
    int count = average - n;

    if(count< 0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<count<<endl;
    }

   //return newcount;

} 

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> vec;

        for (int i = 0; i < n; i++)
        {
            int inp = 0;
            cin>>inp;
            vec.push_back(inp);
        }

        minimumAdd(vec,n,k);
    }
}