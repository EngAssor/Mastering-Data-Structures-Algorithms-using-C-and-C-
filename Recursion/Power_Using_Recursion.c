#include<stdio.h>
int POW(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return POW(m,n-1)*m;
    }
}

int main(void)
{
    printf("%d",POW(2,5));// output is 32
    return 0;
}