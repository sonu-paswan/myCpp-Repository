#include <bits/stdc++.h>
// #include <stdlib.h>///////// no need to include this
// #include <time.h>/////////// no need to include this also
using namespace std;
int Game(char you, char comp) //sw,wg,sg,ws,gw,gs
{
   if (you == comp) //ss,ww,gg
   {
      return 0;
   }
   else if (you == 's' && comp == 'w')
   {
      return 1;
   }
   else if (you == 'w' && comp == 's')
   {
      return -1;
   }

   else if (you == 'w' && comp == 'g')
   {
      return 1;
   }
   else if (you == 'g' && comp == 'w')
   {
      return -1;
   }
   else if (you == 's' && comp == 'g')
   {
      return -1;
   }
   else //if (you == 'g' && comp == 's')
   {
      return 1;
   }
}
int main()
{
   char you, comp;
   bool Flag = true;
   srand(time(NULL));
   while (Flag != false)
   {
      Flag = true;
      int number = rand() % 100 + 1;
      if (number < 34)
         comp = 'w';
      else if (number >= 34 && number <= 66)
         comp = 's';
      else
         comp = 'g';
      cout << "choose s for Snake, g for Gun, w for Water" << endl;
      cin >> you;
      int result = Game(you, comp);
      cout << "you choose:" << you << "   computer choose:" << comp << endl;
      if (result == 0)
      {
         cout << "game draw" << endl;
      }
      else if (result == 1)
      {
         cout << "you win" << endl;
         Flag = false;
      }
      else
      {
         cout << "yow lose" << endl;
      }
   }

   return 0;
}
//note :- syntax for generating random number is
//int number = (rand()%(upper - lower + 1)) + lower;