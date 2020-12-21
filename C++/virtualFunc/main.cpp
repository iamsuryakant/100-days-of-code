#include <iostream>

using namespace std;

class BasicCar{
public:
    virtual void start()
    {
        cout<<"Basic Car Started"<<endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void start()
    {
        cout<<"Advance Car is Started"<<endl;
    }
};
int main()
{
   BasicCar *p = new AdvanceCar();
   p -> start();
    return 0;
}
