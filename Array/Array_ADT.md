# Array ADT (Abstract Data Type)
**Array is a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.** They are used to store similar types of elements as the data type must be the same for all elements.
The array can implement other data structures like linked lists, stacks, queues, trees, and graphs.
#Array is the simplest and most widely used data structure.

we will discuss the following topics :
   
### 1. Array space
### 2. Array size
### 3. length of Array(NO.of elements)
   
# Operations on Array:
### 1-Array display
### 2-ADD(element)/append(element)
### 3-insert(index,element)
### 4-Delete(index)
### 5-Search(element)
### 6-Get(index)
### 7-Set(index,element)
### 8-Max()/Min()
### 9-Reverse()
### 10-Shift()/Rotate()

## 1- array space and size
```
        int A[10];//static array of size 10 C
        int *p;
        p=new int[5];//dynamic array of size 5 C++
```
## 2- array length
    length is the no.of elements present in the array  see  Array_ADT.c file

--------------------------------------------------------------------------------------------------------------------------------
let's do some operations on an array
we have array A 
```
int A[10]={8,3,7,12,6,9};
size=10
length= 6 //note this the length is the number of existing elements 
```
### 1- Display()
  ```
  for(i=0;i<Length;i++)
    {
        printf(A[i]);
    }
```
## 2-Add(x) ==>o(1)
  ```
    A[Length]=x;
    Length++;
   ```  
## 3-insert(index,element)==>o(n)
this function should store the new element without overwriting any element so if the index is not empty it has to shift the elements to shift them
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
in this function, we remove the element by its index and after that, we have to shift the array to no left free space because if we let it free then we always have to check if the index we want is free or not so shift the array save a lot of time and work for that we first get the index then shift the array
```x=A[index];
for(i=index;i<Length-1;i++)
{
    A[i]=A[i+1];
}
Length--;
```



## 5-Search(element)
there are two types of Search linear Search and binary search 
### 1-linear search  ==>O(n)
 in liner search, we look for the element linerly one by one until find the element and return the index.
 if the element is not found then **we return -1**.
```
for(i=0;i<Length;i++)
{
    if(element==A[i])
        return i;
}
return -1;
```

**To improve linear search we use two methods transposition and move to head/front**
if you have some books and u searched for a specific one and you found it, then if you search for it again you will find it faster than the first time.
form this concept transposition and move to head enhance the linear search.

**1-transposition**

in this method we shit the key element (the element you are looking for ) to the head in one step and every time you search for it it's come closer and closer to the head which makes it faster and faster to be found the next time so before returning the index you have to swap the elements. 
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
in this method every time you search for an element it is faster to get

**2-Move to head**

in this method, we swap the key element with the head element which makes finding the same element next time the fastest operation.
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
