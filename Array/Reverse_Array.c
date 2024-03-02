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
struct Array A = {{2, 3, 4, 5, 6}, 10, 5};

void Reverse(struct Array *a)
{
    int i, j, temp;
    for (i = 0, j = a->length - 1; i < j; j--, i++)
    {
        temp = a->A[i];
        a->A[i] = a->A[j];
        a->A[j] = temp;
    }
}
void Reverse2(struct Array *a)
{
    int i, j;
    int *B;
    B = (int *)malloc(a->length * sizeof(a->A[0]));
    for (i = a->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = a->A[i];
    }
    for (i = 0; i < a->length; i++)
    {
        a->A[i] = B[i];
    }
}

int main(void)
{
    Display(A);
    Reverse2(&A);
    Display(A);
    return 0;
}