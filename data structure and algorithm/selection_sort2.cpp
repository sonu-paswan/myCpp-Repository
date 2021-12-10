
//simple selection sort program in c++

#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void selection_sort(int A[], int length)
{
    int index;
    for (int i = 0; i < length - 1; i++)
    {

        index = i;
        for (int j = i + 1; j < length; j++)
        {
            if (A[j] < A[index])

                index = j;
        }
        swap(&A[index], &A[i]);
    }
}
void print(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << Arr[i] << " ";
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11,9,90,-8};
    int length = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, length);
    print(arr, length);
    return 0;
}