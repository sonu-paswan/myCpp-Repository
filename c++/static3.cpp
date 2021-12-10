//program to demonstrate life of static object within a block
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
        static fun obj;
    }
    cout << "end of main"<<endl;

    return 0;
}