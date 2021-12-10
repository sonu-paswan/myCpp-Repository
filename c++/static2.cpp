//program to demonstrate static function along with static3.cpp file
#include <iostream>
using namespace std; 
class fun
{
public:
    fun()
    {
        cout << "i am in constructor !" << endl;
    }
    ~fun()
    {
        cout << "i am in destructor !" << endl;
    }
};

int main()
{
    int x = 0;

    if (x == 0)
    {
        fun obj;
    }
    cout << "end of main";

    return 0;
}