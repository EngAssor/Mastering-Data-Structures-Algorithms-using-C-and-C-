# Array ADT (Abstract Data Type)
**Array is a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.** They are used to store similar types of elements as the data type must be the same for all elements.
Array can implement other data structures like linked lists, stacks, queues, trees, and graphs.
#Array is the simplest and most widely used data structure.

we will discuss the following topics :
    1-Array space
    2-Array size
    3-length of Array(NO.of elements)
    operations on Array:
    1-Array display
    2-ADD(element)/append(element)
    3-insert(index,element)
    4-Delete(index)
    5-Search(element)
    6-Get(index)
    7-Set(index,element)
    8-Max()/Min()
    9-Reverse()
    10-Shift()/Rotate()

## 1- array space and size
```
        int A[10];//static array of size 10 C
        int *p;
        p=new int[5];//dynamic array of size 5 C++
```
## 2- array length
    length is the no.of elements is present in the array 

    see  Array_ADT.c file

-----------------------------------------------------
let's do some operations on an array
we have array A 
```
int A[10]={8,3,7,12,6,9};
size=10
length= 6 //note this the length is the number of
existing elements 
```
### 1- Display()
    for(i=0;i<Length;i++)
    {
        printf(A[i]);
    }
## 2-Add(x) ==>o(1)
  ```
    A[Length]=x;
    Length++;
   ```  
## 3-insert(index,element)==>o(n)
    this function should store the new element without overwriting any element so if the index is not empty it has to shift the elements
    to shift them
   ```
    for(i=Length;i>index,i--)
    {
        A[i]=A[i-1];
    }
    then insert the new element
    a[index]=element;
    Length++;
  ``` 
## 4-Delete(index)
in this function we remove the element by it's index and after that we have to shift the array to no left any free space becase if we let it free then we always have to check if the index we want is free or not so shift the array save alot of time and work for that we first get the index then shift the array
```x=A[index];
for(i=index;i<Length-1;i++)
{
    A[i]=A[i+1];
}
Length--;
```



## 5-Search(element)
there is tow types of Search linera Search and binary search 
### 1-linera search  ==>O(n)
in liner search we look for the element linerly one by one untill find the element and return the index .
if the element not found then we return -1.
```
for(i=0;i<Length;i++)
{
    if(element==A[i])
        return i;
}
return -1;
```

**to improve linear search we use tow methods transpositon and move to head/front**
if you have some books and u searchde for spicefic one and you found it, then if you search for it agine you will find it faster than first time .
form this concept transpositon and move to head are inhancing the linear search.
**1-transpositon**
in this method we shit the key element (the element you are looking for ) to the head by one step and evrey time you search for it it's come closer and closer to the head which make it fater and faster to be found next time so before return the index you have to swap the elements. 
```
 for(i=0;i<Length;i++)
{
    if(element==A[i])
        {  
            swap(A[i],A[i-1];)
             return i;
        }
}
```
in this method the every time you search for an element make it faster to get
**2-Move to head**
in this method we swap the key element with the haed element which make finding the same element next time is the fastest opration .
```
 for(i=0;i<Length;i++)
{
    if(element==A[i])
        {  
            swap(A[i],A[0];)
             return i;
        }
}
```
