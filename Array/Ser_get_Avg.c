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

int Get(struct Array a, int index)
{
    if (index >= 0 && index < a.length)
        return a.A[index];
    return -1;
}

void Set(struct Array *a, int index, int value)
{
    if (index >= 0 && index < a->length)
        a->A[index] = value;
}

int Max(struct Array a)
{
    int max = a.A[0];
    for (int i = 1; i < a.length; i++)
    {
        if (a.A[i] > max)
        {
            max = a.A[i];
        }
    }
    return max;
}
int Min(struct Array a)
{
    int min = a.A[0];
    int i;
    for (i = 1; i < a.length; i++)
    {
        if (a.A[i] < min)
        {
            min = a.A[i];
        }
    }
    return min;
}
int sum(struct Array a)
{
    int total = 0;
    int i;
    for (i = 0; i < a.length; i++)
    {
        total += a.A[i];
    }
    return total;
}
float Avg(struct Array a)
{
    return (float)(sum(a)) / a.length;
}
struct Array A = {{2, 3, 4, 5, 6}, 10, 5};

int main(void)
{
    printf("%d \n", Get(A, 3));
    Set(&A, 0, 5);
    Display(A);

    printf("\n %d \n", Max(A));
    printf("\n %d \n", Min(A));
    printf("\n %d \n", sum(A));
    printf("\n %f \n", Avg(A));

    return 0;
}