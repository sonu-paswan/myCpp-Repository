#include <iostream>
using namespace std;
#define MAX 50
//insertion in array
void INSERT(int Arr[], int length, int ind, int num)
{
    if (ind > length)
        exit(1);
    int k = ind;
    for (int i = length; i > k; i--)
        Arr[i] = Arr[i - 1];
    Arr[ind] = num;
}
//traversing in array
void display(int A[], int length_of_array)
{
    for (int i = 0; i < length_of_array; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    int arr[MAX] = {2, 1, 43, 5, 8, 7, 5};
    int size = 7;
    cout << "the initial array is " << endl;
    display(arr, size);
    int num, index;
    cout << "enter index and number you want to insert" << endl;
    cin >> index;
    cin >> num;
    INSERT(arr, size, index, num);
    size = size + 1;
    cout << "after insertion array is " << endl;
    display(arr, size);
    return 0;
}