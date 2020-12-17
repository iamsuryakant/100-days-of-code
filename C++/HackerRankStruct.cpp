#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{

    int age;
    int standard;
    string first_name;
    string last_name;

    Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }

    void set_age(int a)
    {
        age = a;
    }

    void set_standard(int b)
    {
        standard = b;
    }
    void set_first_name(string f)
    {
        first_name = f;
    }
    void set_last_name(string l)
    {
        last_name = l;
    }

    int get_age()
    {
        return age;
    }

    int get_standard()
    {
        return standard;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
};
/*
    add code for struct here.
*/

int main()
{
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}