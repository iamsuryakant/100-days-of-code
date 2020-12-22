#include <iostream>

using namespace std;
class your;
class My
{
private:
    int a;
protected:
    int b;
public:
    int c;
friend your;
};
class your
{
public:
    My m;
    void fun()
    {
        m.a = 15;
        m.b = 20;
        m.c = 13;
    }
};

int main()
{
    return 0;
}
