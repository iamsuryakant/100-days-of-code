#include <iostream>

using namespace std;

struct Demo
{


    int x;
    int y;

    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;

    d.x = 20;
    d.y = 10;

    d.display();
}