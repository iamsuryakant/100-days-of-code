#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p;
    double *q;

    p = &x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    //cout<<sizeof(p);
    cout<<sizeof(q);

    return 0;
}
