#include <iostream>
using namespace std;
class Vector
{
private:
    int i, j, k;

public:
    void Showdata()
    {
        cout << i << "i"
             << " + " << j << "j"
             << " + " << k << "k";
    }
    void Setdata(int x, int y, int z)
    {
        i = x;
        j = y;
        k = z;
    }
    friend Vector operator+(Vector, Vector);
};
Vector operator+(Vector A, Vector B)
{
    Vector temp;
    temp.i = A.i + B.i;
    temp.j = A.j + B.j;
    temp.k = A.k + B.k;
    return temp;
}
int main()
{
    Vector V1, V2, V3;
    V1.Setdata(2, 4, 7);
    V2.Setdata(3, 9, 6);
    V3 = V1 + V2; //it is same as V3=operator+(V1,V2);
    V3.Showdata();
    return 0;
}