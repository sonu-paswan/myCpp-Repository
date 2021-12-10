#include <iostream>
using namespace std;
//// linear searching in array ////
int linearSearch(int arr[], int length, int element)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}
////binary searching in array  ////
int binarySearch(int ar[],int length,int element)
{
    int start=0, end=length-1;
    int mid;
    while(start<=end)
    {
        mid =(start+end)/2;
        if(element<ar[mid])
        end=mid-1;
        else if(element>ar[mid])
        start=mid+1;
        else
        return mid;
    }
    return -1;
}
int main()
{
    int A[] = {7,66,78,90,98,99,120,123,456};
    int size = sizeof(A) / sizeof(A[0]);
    int element = 456;
    int index = binarySearch(A, size, element);
    if (index == -1)
        cout << "element not found !" << endl;
    else
        cout << "Element " << element << " found at " << index << endl;
    return 0;
}