#Array ADT (Abstract Data Type)
#Array is a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array. They are used to store similar type of elements as in the data type must be the same for all elements.
#Array can be used to implement other data structures like linked list, stack, queue, tree, and graphs.
#Array is the simplest and most widely used data structure.

we will discuss the following topics :
    1-Array space
    2-Array size
    3-length of Array(NO.of elements)
    oprations on Array:
    1-Array display
    2-ADD(element)/append(element)
    3-insert(index,element)
    4-Delet(index)
    5-Search(element)
    6-Get(index)
    7-Set(index,element)
    8-Max()/Min()
    9-Reverse()
    10-Shift()/Rotate()

1- array space and size

        int A[10];//static array of size 10 C
        int *p;
        p=new int[5];//dynamic array of size 5 C++
2- array length
    length is the no.of elements is present in the array 

    see  Array_ADT.c file

------------------------------------------
lets do some oprations on array
we have array A 
int A[10]={8,3,7,12,6,9};
size=10
length= 6 //note this the length is the number of existing elments 
1- Display()
    for(i=0;i<Length;i++)
    {
        printf(A[i]);
    }
2-Add(x) ==>o(1)
    A[Length]=x;
    Length++;
     
3-insert(index,element)==>o(n)
    this function shloud store the new element without overwrite on any element so if the indext not empty it has to shift the elements
    to shift them
    for(i=Length;i>index,i--)
    {
        A[i]=A[i-1];
    }
    then insert the new element
    a[index]=element;
    Length++;
     
4-



     