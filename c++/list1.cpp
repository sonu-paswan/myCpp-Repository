//list (STL) in cpp
#include <iostream>
#include <list>
using namespace std;
//some list operations in stl
void display(list<int> &L)
{
    list<int>::iterator iter;
    iter = L.begin();
    for (iter; iter != L.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; //list of lenght zero
    for (int i = 1; i <= 8; i++)
    {
        list1.push_back(i); //adding element in list
    }
    list<int>::iterator iter;
    iter = list1.end(); //iter gets reference of last element in list1
    list1.insert(iter,90);
    display(list1);
    cout << "after reversing list" << endl;
    list1.reverse();
    display(list1);
    list<int>::iterator iter2;
    iter2 = list1.begin();
    list1.erase(iter2); //erasing  first element of list
    cout << "after deleting first element of above list " << endl;
    display(list1);

    return 0;
}