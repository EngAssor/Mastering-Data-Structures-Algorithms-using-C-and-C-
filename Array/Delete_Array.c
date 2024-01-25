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

int Delete(struct Array * arr,int index) 
{
    int x,i;
    if(index>=0 && index <= arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;

    }
    return 0;
}
int main()
{
    int n,index;
struct Array arr={{2,3,4,5,6},10,5};
printf("Enter the indext to delete: ");
scanf("%d",&n);
n=Delete(&arr,n);
printf("%d is the element \n",n);

Display(arr);
    return 0;
}