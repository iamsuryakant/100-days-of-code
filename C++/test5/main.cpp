#include <iostream>

using namespace std;
int add(int x, int y)
{
    int sum = x+y;

    cout<<"The sum is: "<<sum;
}
int main()
{
    int a = 10, b= 20;

    add(a,b);
    //cout << "Hello world!" << endl;
    return 0;
}
