#include <iostream>
using namespace std;
class boy
{
public:
    void cricket()
    {
        cout << "I can play cricket" << endl;
    }
    void batminton()

    {
        cout << "I can play batminton" << endl;
    }
};
class girl : public boy
{
public:
    void hockey()
    {
        cout << "I can also play hockey" << endl;
    }
};
int main()
{
    boy B1;
    cout<<"Boy sports quality"<<endl;
    B1.cricket();
    B1.batminton();
    girl G1;
    cout<<"Girl sports quality"<<endl;
    G1.batminton();
    G1.hockey();
    return 0;
}