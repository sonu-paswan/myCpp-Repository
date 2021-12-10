#include <iostream>
#define MAX 50
using namespace std;
void DELETE(int A[], int length, int ind)
{
    if (ind > length - 1)
        exit(1);
    for (int i = ind; i < length; i++)
    {
        A[i] = A[i + 1];
    }
}
void display(int A[], int length_of_array)
{
    for (int i = 0; i < length_of_array; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    int arr[MAX] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    cout << "initial array" << endl;
    display(arr, size);
    cout << "enter position for delete " << endl;
    int positon;
    cin >> positon;
    DELETE(arr, size, positon);
    size = size - 1;
    cout << "array after deletion" << endl;
    display(arr, size);

    return 0;
}