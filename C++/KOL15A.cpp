#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]>= '0' && s[i] <= '9')
            {
                sum += s[i]-'0';
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
