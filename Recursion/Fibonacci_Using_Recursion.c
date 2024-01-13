#include<stdio.h>

int fib(int n)
{
    int t0=0,t1=1,s=0,i;
    if(n<=1)
        return n;
    else
    {
          return fib(n-1)+fib(n-2);
    }

}


int main()
{

    printf("%d",fib(6));

    return 0;
}