#include <iostream>

using namespace std;

class Rectangle{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    Rectangle r1;

    r1.length = 5;
    r1.breadth= 10;

    cout<<"Area of rectangle is: " << r1.area() <<endl;
    cout<<"Perimeter is: " << r1.perimeter() <<endl;
    return 0;
}
