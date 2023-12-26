#include <stdio.h>
 int fact(int n)
 {
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
 }
 int main(void)
 {

    printf("%d",fact(3));

    return 0;
 }