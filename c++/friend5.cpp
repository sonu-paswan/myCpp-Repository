#include <bits/stdc++.h>
using namespace std;
const int  high=1;
const int  low= 0;
class C1;
class C2;
class C1
{
private:
    int status;

public:
    friend void Check(C1, C2);
    C1(int a)
    {
        status=a;
    }
};
class C2
{
private:
    int status;

public:
    friend void Check(C1, C2);
    C2(int b)
    {
        status=b;
    }
};
void Check(C1 object1, C2 object2)
{
    if (object1.status && object2.status)
        cout << "you are to hot!" << endl;
    else
        cout << "you are cool!" << endl;
}
int main()
{
    C1 object1(high);
    C2 object2(low);
    Check(object1,object2);

    return 0;
}