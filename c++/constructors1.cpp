#include <iostream>
using namespace std;
class wall
{
private:
    float length;
    float breadth;

public:
    wall(float a) //constructor with one parameter
    {
        cout << "your are in wall1" << endl;
        length = a;
    }
    wall(float x, float y) //constructor with two parameters
    {
        cout << "you are in wall2" << endl;
        length = x;
        breadth = y;
    }
    wall() //constructor with no  parameter  / default parameter
    {
        cout << "you are in wall3" << endl;
        length = 0;
        breadth = 0;
    }
    void showdata()
    {
        cout << "length=" << length << "\t"
             << "breadth=" << breadth << endl;
    }
};

int main()
{
    wall w1 = 9.9;
    w1.showdata();
    wall w2(48, 9);
    w2.showdata();
    wall w3;
    w3.showdata();
    return 0;
}