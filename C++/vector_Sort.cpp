#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    //vector<int> num[100];

    vector<int> v;
    int inp =0;

    for (int i = 0; i < n; i++)
    {
        cin >> inp ;
        v.push_back(inp);
    }

    sort(v.begin(),v.end());


    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
    cout<<endl;

    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    //int sum = 0;
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout << *min_element(v.begin(), v.end());

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}