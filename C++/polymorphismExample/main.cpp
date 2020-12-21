#include <iostream>

using namespace std;

class Car{
public:
    virtual void start()
    {
        cout<<"car started"<<endl;
    }
    void stop()
    {
        cout<<"car stopped"<<endl;
    }
};

class Innova : public Car{
public:

    void start()
    {
        cout<<"Innova Started"<<endl;
    }
    void stop()
    {
        cout<<"Innova Stopped"<<endl;
    }
};
class Swift : public Car{
public:

    void start()
    {
        cout<<"Swift Started"<<endl;
    }
    void stop()
    {
        cout<<"Swift Stopped"<<endl;
    }
};
int main()
{
    Car *c = new Innova();
    c->start();
    c = new Swift();
    c ->start();
    return 0;
}
