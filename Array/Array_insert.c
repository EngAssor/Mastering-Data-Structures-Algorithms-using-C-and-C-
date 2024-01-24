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
void Append (struct Array * arr ,int x)
{
    if(arr->length<arr->size)// check if the array has free space
    {
        arr->A[arr->length++]=x;
    }
}
void Insert(struct Array * arr,int index,int x)
{
    int i;
    if(index >= 0 && index <= arr->length)// check the index is valid
    {
        for(i=arr->length;i>index;i--)// shift the elements to insert the new element
        {
            arr->A[i]=arr->A[i-1];

        }
        arr->A[index]=x;// inster the new element
        arr->length++;//increment the length

    }
}
int main()
{
    int n,index;
struct Array arr={{2,3,4,5,6},10,5};
printf("Enter the element to append: ");
scanf("%d",&n);
Append(&arr,n);
printf("Enter the element and the index to instert: ");
scanf("%d",&n);
scanf("%d",&index);
Insert(&arr,index,n);
Display(arr);
    return 0;
}