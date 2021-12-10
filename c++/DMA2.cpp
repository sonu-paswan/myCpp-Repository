#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "how many students are there :";
    cin >> num;
    float *ptr = new float;
    cout << "enter your CGPA :";
    for (i = 0; i < num; i++)
    {
        cin >> *(ptr + i);
    }
    cout << "students CGPA :" << endl;
    for (i = 0; i < num; i++)
    {
        cout << *(ptr + i)<<endl;
    }
    delete ptr;

    return 0;
}