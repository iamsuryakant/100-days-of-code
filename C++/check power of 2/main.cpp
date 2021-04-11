#include <iostream>

using namespace std;

int checkpower(int x)
{
    if(x == 0){
        return 0;
    }
    while( x != 1)
    {
        if(x % 2 != 0)
            return 0;
            x /= 2;
    }
    return 1;

}
int main()
{
    int n = 28;
    int x = checkpower(n);
    if(x == 1)
    {
        cout<<n<<" is power of 2"<<endl;
    }
    else
    {
        cout<<x<<"not power of 2"<<endl;
    }

    return 0;
}
