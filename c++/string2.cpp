#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "enter your name : ";
    getline(cin, name);
    cout << "your name is : " << name;
    return 0;
}