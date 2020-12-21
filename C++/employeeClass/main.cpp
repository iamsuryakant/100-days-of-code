#include <iostream>

using namespace std;

class Employee{
private:
    int eid;
    string name;
public:

    Employee(int e, string n)
    {
        eid = e;
        name = n;
    }

    int getEmployeeID(){

        return eid;
    }
    string getName()
    {
        return name;
    }
};

class FulltimeEmployee : public Employee
{
private:
    int salary;

public:

    FulltimeEmployee(int e, string n, int sal):Employee(e,n)
    {
        salary = sal;
    }
    int getSalary()
    {
        return salary;
    }
};

class parttimeEmployee : public Employee
{
private:
    int wage;
public:
    parttimeEmployee(int e, string n, int w): Employee(e,n)
    {
        wage = w;
    }
    int getwage()
    {
        return wage;
    }
};
int main()
{
    int e, w,sal;
    string n1,n2;
    cin>>e>>n1>>w;
    cin>>e>>n2>>sal;
    parttimeEmployee p1(e,n1,w);
    FulltimeEmployee p2(e,n2,sal);

    cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Daily wage of "<<p1.getName()<<" is "<<p1.getwage()<<endl;
    return 0;
}
