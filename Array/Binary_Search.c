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
// binary search using loop
int BinarySearch(struct Array arr,int key)
{
    int l=0;
    int h=arr.length-1;
    int mid;
    while(l<=h)
    {
        mid=(h+l)/2;
        if(key == arr.A[mid])
            return mid;
        if(key>arr.A[mid])
        {
            l=mid+1;
        }
        else
            h=mid-1;

    }
    return -1;
}
// binary search using recursion
int R_BinarySearch(struct Array arr ,int key,int l,int h)
{
   int mid;
if(l<=h)
{
     mid=(l+h)/2;
    if(key==arr.A[mid])
        return mid;
    if(arr.A[mid]>key)
    {
       return R_BinarySearch(arr,key,l,mid-1);
    }
    else
       return R_BinarySearch(arr,key,mid+1,h);
}   
    return -1;
}

int main()
{
struct Array arr={{2,3,4,5,6},10,5};

printf("%d\n ",R_BinarySearch(arr,5,0,arr.length-1));


Display(arr);
    return 0;
}