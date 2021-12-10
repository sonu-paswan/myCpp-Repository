
//Bubble sort in cpp using dynamic initialization
#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void Bubble_sort(int *ptr, int n)
{
    bool indicator;
    for (int i = 1; i <= n - 1; i++)//entry pass 
    {
        indicator = false;
        for (int j = 0; j <= n - 1 - i; j++)//comparision
            if (ptr[j] > ptr[j + 1])
            {
                swap(&ptr[j], &ptr[j + 1]);
                indicator = true;
            }
        if (indicator == false)
            break;
    }
}
///////Bubble sort can also be code as ///////////////
// void Bubble_sort(int *ptr, int length)
// {
//     bool indicator;
//     for (int i = 0; i < length - 1; i++)
//     {
//         indicator = true;
//         for (int j = length - 1; j > i; j--)
//         {
//             if (ptr[j] < ptr[j - 1])
//             {
//                 swap(&ptr[j], &ptr[j - 1]);
//                 indicator = false;
//             }
//         }
//         if (indicator == true)
//             break;
//     }
    ////////////////////////////////////////////////////////
    int main()
    {
        int *pointer = NULL;
        cout << "how many numbers : ";
        int count;
        cin >> count;
        pointer = new int[count]; //dynamically initialization numbers
        if (pointer == NULL)
            cout << "memory not allocated" << endl;
        else
            cout << "memory allocated" << endl;
        for (int i = 0; i < count; i++)
        {
            cin >> pointer[i];
        }
        Bubble_sort(pointer, count);
        for (int i = 0; i < count; i++)
        {
            cout << pointer[i] << " ";
        }
        return 0;
    }