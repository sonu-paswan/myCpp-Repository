#include <bits/stdc++.h>
using namespace std;
class experiment
{
private:
    static int x;
     int y;

public:
    void fun(int p)
    {
        y = p;
    }
   static void showstatic()
    {
        cout << x << "\t" <<  endl;
    }
    void shownonstatic()
    {
        cout<<y<<endl;
    }
};
int experiment::x = 9;
int main()
{
    experiment A1;
    A1.fun(5);
    A1.showstatic();
    A1.shownonstatic();
    return 0;
}