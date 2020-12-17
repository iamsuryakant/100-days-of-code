#include<iostream>

using namespace std;

class Student{

private:

    int roll;
    string s;

    int marks1,marks2,marks3;
public:
    Student(int r, string n, int m, int p, int c)
    {
        roll = r;
        s = n;
        marks1 = m;
        marks2 = p;
        marks3 = c;
    }
    int Total_marks()
    {
        return marks1+marks2+marks3;
    }
    char Grade()
    {
        float average = Total_marks()/3;
        if(average<= 40)
            return 'C';
        else if(average>=40 && average<60)
            return 'B';
        else

            return 'A';
        
    }

};

int main()
{

    int roll;
    string name;
    int m, p, c;
    cout << "Enter Roll number of a Student: ";
    cin >> roll;
    cout << "Enter Name of a Student: ";
    cin >> name;
    cout << "Enter marks in 3 subjects: ";
    cin >> m >> p >> c;
    Student s(roll, name, m, p, c);
    cout << "Total Marks:" << s.Total_marks() << endl;
    cout << "Grade of Student:" << s.Grade() << endl;
    return 0;
}
