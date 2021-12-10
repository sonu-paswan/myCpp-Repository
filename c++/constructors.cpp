//program to understand constructors in c++
#include<iostream>
using namespace std;
class wall
{
private:
    float length;
    float breadth;

public:
    wall()  //constructor with no parameter that initialized member data
    {
        cout << "automatic created member data" << endl;
        length = 7.5;
        breadth = 9.5;
        cout << "length=" << length << endl;
        cout << "breadth=" << breadth << endl;
    }

    wall (wall &obj) //code for copy conclassor
    {
        length=obj.length;
        breadth=obj.breadth;
    }
    float area()
    {
        return (length * breadth);
    }
};
int main()
{
    wall wall1;
    cout << "areaof wall1=" << wall1.area()<<endl;
    wall wall2=wall1; // copying wall1 to wall2 object
    cout<<"area of wall2="<<wall2.area();

    return 0;
}
//note - constructors are instance function that can never be static 
//       constructors not have return type