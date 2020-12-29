#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int idx;
    cin >> idx;

    int n;
    cin >> n;

    vector<int> v;

    int inp = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        v.push_back(inp);
    }
    int x;

    //cin >> x;
    x = v[idx];

    for (int i = idx; i<n-1; i++)
    {
        v[i] = v[i + 1];
    }

    
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}