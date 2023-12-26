#include<stdio.h>
int POW(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return POW(m*m,n/2);
    }
    else
    {
        return m*POW(m*m,(n-1)/2);
    }
    
}

int main(void)
{
    printf("%d",POW(2,5));// output is 32
    return 0;
}