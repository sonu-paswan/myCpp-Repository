#include <iostream>
using namespace std;
//obejct pointer in cpp
class Wall
{
private:
    int heigth;
    int width;

public:
    int price;
    void setDimension(int heigth, int width)
    {
        this->heigth = heigth;
        this->width = width;
    }
    void showDimension()
    {
        cout << "heigth: " << heigth << " width: " << width << endl;
    }
    void showPrice()
    {
        cout << "price of wall is :" << price << endl;
    }
};
int main()
{
    Wall smallWall, *object_Pointer;
    object_Pointer = &smallWall;
    (*object_Pointer).price = 900;      //another style to call class member using object pointer variable
    object_Pointer->setDimension(2, 4); //-> operator is used to access member and member function
    object_Pointer->showDimension();
    object_Pointer->showPrice();
}