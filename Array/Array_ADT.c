#include <stdio.h>
#include <stdlib.h>

struct Array
{
    /* data */
    int *A;
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
        printf("%d", arr.A[i]);
    }
};

int main()
{
    struct Array arr;
    int n, i;
    printf("Enter size of an array\n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0; // there is no elements now
    printf("Enter number of numberes \n");
    scanf("%d", &n);

    printf("Enter all Elements\n");
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    Display(arr);
}
