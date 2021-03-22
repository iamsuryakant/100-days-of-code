#include <iostream>
#define pi 3.1415926

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double A,r;
        cin>>r;
        A = (double)  pi*r*r;
        cout<<"Area of circle is: "<<(double) A<<endl;

    }
    return 0;
}
