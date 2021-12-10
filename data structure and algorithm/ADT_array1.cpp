#include <iostream>
using namespace std;
class myARRAY
{
public:
    int total_size;
    int used_size;
    int *ptr;
    void createARRAY(int T, int U)
    {
        total_size = T;
        used_size = U;
        if (total_size < used_size)
        {
            printf("array out of bound\n");
            exit(1);
        }
        else
            ptr = new int[total_size];
    }
    void setValue()
    {

        int num;
        for (int i = 0; i < used_size; i++)
        {
            printf("enter integer numbers %d: ", i + 1);
            scanf("%d", &num);
            ptr[i] = num;
        }
    }
    void displayARRAY()
    {
        for (int j = 0; j < used_size; j++)
        {
            printf("%d ", ptr[j]);
        }
    }
};
int main()
{
    myARRAY marks;
    int size, length;
    printf("enter full size of array and used size of array\n");
    scanf("%d %d", &size, &length);

    marks.createARRAY(size, length);
    marks.setValue();
    marks.displayARRAY();

    return 0;
}