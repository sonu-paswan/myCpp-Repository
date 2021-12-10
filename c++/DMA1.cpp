//new and delete in c++
#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int; //ptr takes address 
    *ptr = 15;
    cout << "address of pointer :" << ptr<<"\t" << "value :" << *ptr << endl;
    delete ptr;  //memory deallocated 
    return 0;
}