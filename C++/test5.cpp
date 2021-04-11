#include <bits/stdc++.h>
using namespace std;

int &fun()
{

    static int a = 10;
    return a;
}
int main()
{

    int &y = fun();
    y = y + 30;
    cout << fun();
    //cout<<"GfG!";
    return 0;
}