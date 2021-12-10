//program to understand copy constructors
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int roll;
    char div;

public:
    student(string, int, char);
    void showdata();
    student(student &object);//copy constructor
};
student::student(string S, int R, char D)
{
    name = S;
    roll = R;
    div = D;
}
student ::student(student &object)
{
    name = object.name;
    roll = object.roll;
    div = object.div;
}

void student ::showdata()
{
    cout << "student name :" << name << endl;
    cout << "student roll no." << roll << endl;
    cout << "student division :" << div << endl;
}
int main()
{
    student s("ranjeet", 31, 'A');
    // student s2(s);
    student s2=s;//same as student s2(s);
    s2.showdata();
    return 0;
}