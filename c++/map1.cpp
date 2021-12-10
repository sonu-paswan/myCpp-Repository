//map (STL) in cpp
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()

{
    map<int, string> customer{{12, "Sonu"}, {10, "Avinash"}, {13, "Deepak"}, {14, "Sachin"}, {20, "Roshan"}};
    map<int, string>::iterator iter = customer.begin();
    while (iter != customer.end())
    {
        cout << iter->second << " "<<(*iter).first<<endl;

        iter++;
    }
    map<int, string>::iterator it = customer.begin();
    customer.insert(it,pair<int, string>(16, "Ankit"));
    
    cout << endl
         << "after insertion " << endl;
    while (it != customer.end())
    {
        cout << it->second << " "<<(*it).first<<endl;

        it++;
    }
    return 0;
}