#include <iostream>

using namespace std;

class Test{
public:
    void func()
    {
        cout<<"Inline";
    }
inline void fun2();
};

void Test::fun2()
{
    cout<<"non-inline";
}
int main()
{
    Test t;
    t.func();
    t.fun2();
    return 0;
}
