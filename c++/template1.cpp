#include <bits/stdc++.h>
using namespace std;
//use of template in c++ 

template <typename T>//template tag
class Vector
{
public:
    T *ptr;
    int size;
    Vector(int a)
    {
        size = a;
        ptr = new T[size];
    }
    void setVector(T a, T b, T c)
    {
        ptr[0] = a;
        ptr[1] = b;
        ptr[2] = c;
    }
    T dotProduct(Vector &v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->ptr[i] * v.ptr[i];
        }
        return sum;
    }
};
int main()
{
    Vector<float> v1(3), v2(3);
    v1.setVector(2.6, 5.1, 7.9);
    v2.setVector(2.7, 5.5, 8.0);
    float result = v1.dotProduct(v2);
    cout << result << endl;
    return 0;
}