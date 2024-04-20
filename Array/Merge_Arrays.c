#include <stdio.h>
#include <stdlib.h>
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
struct Array *Merage(struct Array *a1, struct Array *a2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < a1->length && j < a2->length)
    {
        if (a1->A[i] < a2->A[j])
        {
            arr3->A[k++] = a1->A[i++];
        }
        else
        {
            arr3->A[k++] = a2->A[j++];
        }
    }
    for (; i < a1->length; i++)
        arr3->A[k++] = a1->A[i];
    for (; j < a2->length; j++)
        arr3->A[k++] = a2->A[j];

    arr3->length = a1->length + a2->length;
    arr3->size = 10;
    return arr3;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15,25}, 10, 5};
    struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    struct Array *arr3;
    arr3 = Merage(&arr1, &arr2);
    Display(*(arr3));
    return 0;
}