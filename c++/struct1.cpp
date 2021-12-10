//structure in c++
#include <iostream>
#include <string>
using namespace std;
struct room
{
private:
    float length;  // by default public variable
    float breadth; // by default public variable
    float height;  // by default public variable
public:
    void getdata() // function to get  data from user
    {
        cout << "enter room length :";
        cin >> length;
        cout << "enter room breadth :";
        cin >> breadth;
        cout << "enter room height :";
        cin >> height;
    }
    float volume(); // function declaration to calculate volume
};
float room ::volume() //function definition outside structure
{
    return length * breadth * height;
}

int main()
{
    room m;
    m.getdata();
    cout << "volume of a room is :" << m.volume();

    return 0;
}
// In structure all data member and member function are by default public