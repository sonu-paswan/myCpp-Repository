//uninary operator overloading  pre-increament operator
#include <iostream>
using namespace std;
class integer
{
private:
    int value;

public:
    // Constructor to initialize count to 5
    integer() : value(9) {} //it is same as integer() {value=9;}

    // Overload ++ when used as prefix
    integer operator++()
    {
        integer temp;
        temp.value = ++value;
        return temp ;
    }
    void display()
    {
        cout << "Count: " << value << endl;
    }
};
int main()
{
    integer count1, count2;
    count1.display();

    // Call the "void operator ++ ()" function
    count2 = ++count1; //it is same as count2=count1.operator++()
    
    count2.display();
    return 0;
}