#include <iostream>
#include <list>
using namespace std;
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
    list<int> list1;
    for (int i = 1; i <= 10; i++)
    {
        list1.push_back(i);
    }
    list<int>::iterator iter1, iter2;
    iter1 = list1.begin();
    iter2 = list1.begin();
    advance(iter2, 3);         //increment iter by 3 position
    list1.erase(iter1, iter2); //delete first three elements in list1
    display(list1);
    //creating list 2
    list<int> list2;
    for (int j = 50; j >= 40; j--)
    {
        list2.push_back(j);
    }
    // display(list2);
    list2.sort();
    //after sorting
    list1.merge(list2);
    display(list1);
    display(list2); //will not display anything because it is empty now
    return 0;
}