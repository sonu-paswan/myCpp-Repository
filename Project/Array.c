#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 50
int count;
void Display(int A[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void Insert(int A[], int pos, int data)
{
    if (pos > count)
    {
        printf("inssertion is not at correct position\n");
        return;
    }
    for (int i = count; i > pos; i--)
    {
        A[i] = A[i - 1];
    }
    A[pos] = data;
    count++;
}
void DeletePOS(int A[], int pos)
{
    if (pos > count - 1)
    {
        printf("deletion is out of array elements\n");
        exit(1);
    }
    for (int i = pos; i < count - 1; i++)
    {
        A[i] = A[i + 1];
    }
    count--;
}
void DeleteValue(int A[], int data)
{
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (A[i] == data)
        {
            index = i;
            for (int i = index; i < count - 1; i++)
            {
                A[i] = A[i + 1];
            }
            count--;
        }
    }
    if (index == -1)
    {
        printf("element not found\n");
    }
}
int LinearSearch(int A[], int len, int data)
{
    int index = -1;
    for (int i = 0; i < len; i++)
    {
        if (A[i] == data)
            index = i;
    }
    if (index == -1)
    {
        printf("element not found\n");
    }
    return index;
}
void menu()
{
    printf("Menu\n");
    printf("I for Insertion\n");
    printf("D for deletion by index\n");
    printf("V for deleting by value \n");
    printf("S for searching data\n");
    // printf("enter options from menu\n");
    printf("E for exit\n");
}
int main()
{
    int arr[MAX];
    printf("enter number of elements :");

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    char input = 'R';
    int pos, data, value;
    menu();
    while (input != 'E')
    {

        printf("select option from menu \n");
        getchar();
        scanf("%c", &input);
        switch (input)
        {
        case 'I':
            printf("enter position and data\n");
            scanf("%d %d", &pos, &data);
            Insert(arr, pos, data);
            Display(arr, count);
            break;
        case 'D':
            printf("enter position for delete \n");
            scanf("%d", &pos);
            DeletePOS(arr, pos);
            Display(arr, count);
            break;
        case 'V':
            printf("enter value for deleting \n");
            scanf("%d", &value);
            DeleteValue(arr, value);
            Display(arr, count);
            break;
        case 'S':
            printf("enter data to search \n");
            scanf("%d", &data);
            printf("%d\n", LinearSearch(arr, count, data));
            break;
        case 'E':
            exit(1);
        default:
            printf("enter correct input\n");
        }
    }

    return 0;
}
