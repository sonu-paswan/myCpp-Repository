#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out_in_file;
    out_in_file.open("file2.txt");
    if (out_in_file.is_open())
    {
        cout << "file open succesfully !" << endl;
    }
    else
    {
        cout << "File not open" << endl;
        exit(1);
    }
    cout << "Enter number of students :";
    int num, marks;
    string name;
    cin >> num;
    cout << "enter name and marks of students to store in file" << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << "name of student " << i << ": ";

        cin >> name;
        //question :- why getline(cin,name); is not working?
        cout << "marks of student " << i << ": ";
        cin >> marks;
        out_in_file << "name of student is " << name << " and its marks " << marks << endl;
    }
    out_in_file.close();

    return 0;
}