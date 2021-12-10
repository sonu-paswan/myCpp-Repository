// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("file1.txt");//reading from file
  if (myfile.is_open())//true if file is open and associated with stream object
  {
    while ( getline (myfile,line) )//getline return the number of characters read
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}