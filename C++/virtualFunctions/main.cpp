#include <iostream>

using namespace std;

class Base{

public:
    virtual void fun(){
        cout<<"fun of Base "<<endl;
    }

};

class derived : public Base
{
public:
    void fun(){
        cout<<"fun of Derived"<<endl;
    }
};
int main()
{
   derived d;
   Base *ptr = &d;
   ptr ->fun();
   //d.fun();
    return 0;
}
