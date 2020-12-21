#include <iostream>

using namespace std;

class Base{
public:
    virtual void fun2()=0; //pure virtual function...pure virtual functions are used for achieving polymorphism and generalization.
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout<<"Derived fun2";
    }
};

int main()
{
    Base *p = new Derived();

    p -> fun2();
    return 0;
}
