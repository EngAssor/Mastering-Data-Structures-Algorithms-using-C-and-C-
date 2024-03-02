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
### 2-Binary Search
 is a searching algorithm for finding an element's position in a sorted array.
 we have high ,low and mid 
 high point to the end of the array and low point to the begining of it and mid equal to high+low/2. pointing to the mid of the array .
 in this algorsim to find the elemen we are searching for. we compere the element with the value the mid pointing for if they are equal we done our job if not so we see if the it lower than mid then the high will equal mid-1 and cuclute the mid again .if it was higher than the mid low will equal mid+1 and culceat the new mid until we find the element .
 ```
 BinarySearch(l,h,key)
{
    while(l<=h)
   {
    mid=(l+h)/2;
    if(key== A[mid])
        return mid;
    if(key<mid)
        {
            h=mid-1;
        }
    else
       {
        l=mid+1;
       }
}
return -1;
 }
```

## 6-Set(index,element)
to set an element you to konw it's index 
we have frist to ensure the index it's within the boundries 
```
void Set(int index, int x)
{
    if(index >=0 && index < Length)
        A[index]=x;
}
```
## 7-Get(index)
to get an element you to konw it's index 
we have frist to ensure the index it's within the boundries 
```
int Get(int index)
{
      if(index >=0 && index < Length)
        return  A[index];
}
```
## 8-Max()
to get the maxmum element in the array we compper every elemen with eachother

```
int Max(void)
{
    int max=A[0];
    for(int i =1;i<Length;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}
```
## 9-Min()
```
int Min(void)
{
    int min=A[0];
    for(int i =1;i<Length;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    return min;
}
```
## 10-Avg()
Avg = total / Length

```
int Avg(int A[],Length)
{
    int total=0;
    for(int i =1;i<Length;i++)
    {
        total=total+A[i];
    }
    return total/Length;
}
```
## Reverse and Shift an Array
### Reverse 
to do that we have tow methods first with using an another array (B)to copy the elements in reverse oreder then copy it to orignal array (A).
```
for(i=Length-1,j=0;i>=0;i--,j++) //=> n times
{
    B[j]=A[i];
}
for(i=0;i<Length;i++) //=> n times
{
    A[i]=B[i];
}
// all take 2n
// that's  O(n) .
```
secoand method to swap array elements  with eachother frist with last and so on.
using two poniters to elments unitl i is > than J or j is < i

```
for(i=0,j=Length-1;i<j;i++,j--)
{
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
```
