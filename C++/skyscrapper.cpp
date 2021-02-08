
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h;
    long count = 0;
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        while (!s.empty() && h > s.top().first)
            s.pop();
        if (!s.empty() && h == s.top().first)
            count += s.top().second++;
        else
            s.push(make_pair(h, 1));
    }

    cout << count * 2;
    return 0;
}