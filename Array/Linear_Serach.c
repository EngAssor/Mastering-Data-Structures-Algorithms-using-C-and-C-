#include<stdio.h>

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
void swap(int * a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// Normal Linear search
int LinearSearch(struct Array  arr, int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]==key)
        {
            return i;
        }
    }
    return -1;
}
//transposition linear search
int transLinearSearch(struct Array * arr ,int key)
{
    int i;
    for(i=0;i< arr->length;i++)
    {
        if(arr->A[i] == key)
        {
           if(i!=0) // to prevent swap frist element
            swap(&(arr->A[i]),&(arr->A[i-1]));
            return i;
        }
    }
    return -1;
}
//move to head linear search
int MTOHLinearSearch(struct Array * arr ,int key)
{
    int i;
    for(i=0;i< arr->length;i++)
    {
        if(arr->A[i] == key)
        {
           
            swap(&(arr->A[i]),&(arr->A[0]));
            return i;
        }
    }
    return -1;
}

int main()
{
struct Array arr={{2,3,4,5,6},10,5};

printf("%d\n ",LinearSearch(arr,15));
printf("%d \n",transLinearSearch(&arr,2));
printf("%d \n",MTOHLinearSearch(&arr,4));

Display(arr);
    return 0;
}