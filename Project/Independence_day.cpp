#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Independence_Day
{
private:
    string India = "Happy Independence Day to all";
    string freedom_fighters = "let us remember our heroes";

public:
    Independence_Day();
    ~Independence_Day();
    void Mahatma_Gandhi();
    void Bhagat_Singh();
    void Chandrashekhar_Azad();
    void Ashfaqulla_Khan();
    void SubhasChandra_Bose();
    void menu();
};
void Independence_Day::menu()
{
    cout << "Select freedom fighter quotes" << endl;
    cout << "m->Mahatma Gandhi Quotes" << endl;
    cout << "b->Bhagat Singh Quotes" << endl;
    cout << "c->Chandrashekhar Azad Quotes" << endl;
    cout << "a->Ashfaqulla Kahan Quotes" << endl;
    cout << "s->SubhasChandra Bose Quotes" << endl;
    cout << "E->Exit" << endl;
}
Independence_Day::Independence_Day()
{
    for (int i = 0; i < India[i]; i++)
    {
        cout << India[i];
        Sleep(100);
    }
    cout << endl;
    for (int j = 0; j < freedom_fighters[j]; j++)
    {
        cout << freedom_fighters[j];
        Sleep(100);
    }
    cout << endl;
}
void Independence_Day::Mahatma_Gandhi()
{
    string line0 = "Mahatma Gandhi";
    string line1 = "An eye for eye only ends up making ";
    string line2="the whole world blind.";
    

    for (int i = 0; i < line0[i]; i++)
    {
        cout << line0[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line1[i]; i++)
    {
        cout << line1[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line2[i]; i++)
    {
        cout << line2[i];
        Sleep(100);
    }
    cout << endl;
    
}
void Independence_Day::Bhagat_Singh()
{
    string line0 = "Bhagat Singh";
    string line1 = "Revolution is an inalienable right ";
    string line2 = "of mankind. ";
    string line3="Freedom is an imperishable birth";
    string line4="right of all.";
    for (int i = 0; i < line0[i]; i++)
    {
        cout << line0[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line1[i]; i++)
    {
        cout << line1[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line2[i]; i++)
    {
        cout << line2[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line3[i]; i++)
    {
        cout << line3[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line4[i]; i++)
    {
        cout << line4[i];
        Sleep(100);
    }
    cout << endl;
}
void Independence_Day::Chandrashekhar_Azad()
{
    string line0 = "Chandrashekhar Azad";
    string line1 = "I believe in a religion that propagates";
    string line2 = "freedom, equality, and brotherhood.";
    for (int i = 0; i < line0[i]; i++)
    {
        cout << line0[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line1[i]; i++)
    {
        cout << line1[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line2[i]; i++)
    {
        cout << line2[i];
        Sleep(100);
    }
    cout << endl;
}
void Independence_Day::Ashfaqulla_Khan()
{
    string line0 = "Ashfaqulla Khan";
    string line1 = "There is no Dream, and if there is,";
    string line2 = "there is only one to see you my children ";
    string line3 = "struggling for the same and for which ";
    string line4 = "I am expected to be finished.";
    for (int i = 0; i < line0[i]; i++)
    {
        cout << line0[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line1[i]; i++)
    {
        cout << line1[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line2[i]; i++)
    {
        cout << line2[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line3[i]; i++)
    {
        cout << line3[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line4[i]; i++)
    {
        cout << line4[i];
        Sleep(100);
    }
    cout << endl;
}
void Independence_Day::SubhasChandra_Bose()

{
    string line0 = "Subhash Chandra Bose";
    string line1 = "one individual may die for an idea,";
    string line2 = "but that idea will, after his death ";
    string line3 = "will incarnate in thousand lives";
    for (int i = 0; i < line0[i]; i++)
    {
        cout << line0[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line1[i]; i++)
    {
        cout << line1[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line2[i]; i++)
    {
        cout << line2[i];
        Sleep(100);
    }
    cout << endl;
    for (int i = 0; i < line3[i]; i++)
    {
        cout << line3[i];
        Sleep(100);
    }
    cout << endl;
}
Independence_Day::~Independence_Day()
{
    cout << "Salute to all our freedom fighters" << endl;
}
int main()
{
    Independence_Day *Bharat = new Independence_Day();
    char option = 'm';
    Bharat->menu();
    while (option != 'E')
    {
        cout << "select option for menu" << endl;
        cin>>option;
        switch (option)
        {
        case 'm':
            Bharat->Mahatma_Gandhi();
            break;
        case 'b':
            Bharat->Bhagat_Singh();
            break;
        case 'c':
            Bharat->Chandrashekhar_Azad();
            break;
        case 'a':
            Bharat->Ashfaqulla_Khan();
            break;
        case 's':
            Bharat->SubhasChandra_Bose();
            break;
        case 'E':
            cout << "Thanks for wacthing " << endl;
            break;
        default:
            cout << "invalid option" << endl;
            break;
        }
    }
    delete Bharat;
    return 0;
}