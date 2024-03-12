#include <stdio.h>

struct Array
{
    /* data */
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
    {
        /* code */
        printf("%d\n", arr.A[i]);
    }
}
void InsertSort(struct Array *arr, int x)
{
    if (arr->length == arr->size)
    {
        return;
    }
    int i = arr->length - 1;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
int Is_Sorted(struct Array arr)
{
    int i ;
    int flag=1;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    struct Array arr = {{2, 1, 5, 10, 15}, 10, 5};
    InsertSort(&arr, 12);
    Display(arr);
    printf("%d",Is_Sorted(arr));

    return 0;
}