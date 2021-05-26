#include <bits/stdc++.h>
#include<algorithm>
 #define int long long
using namespace std;

int minimumAdd(vector<int> vec, int n,int k)
{
   // vector<int> v;
    int sum = 0, average = 0;
    int avg1, count = 0;
   for(int i = 1; i < n; i++)
   {
       sum += vec[i];
   }

   average = floor(sum)/n;

   if(average > k)
   {
      vec.push_back(1);
      count++;
      minimumAdd(vec, vec.size(), k);
   }

   return count;

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

        cout<<minimumAdd(vec,n,k);
    }
}
