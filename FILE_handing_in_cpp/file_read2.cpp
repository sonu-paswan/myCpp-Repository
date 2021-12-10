#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Reading from the file which is stored in E drive 
int main()
{
    ifstream inputFile;
    inputFile.open("E:\\trial\\programming test\\Contact.txt");
    if (inputFile.is_open())
        cout << "file open successfully!" << endl;
    else
    {
        cout << "file not open" << endl;
        exit(1);
    }
    string line;
    while (inputFile.good())
    {
        getline(inputFile, line);
        cout << line << endl;
    }
    return 0;
}