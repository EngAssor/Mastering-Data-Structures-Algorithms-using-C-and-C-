#include<stdio.h>
int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return Sum(n-1)+n;
    }
}

int main()
{

    printf("%d",Sum(5));//output is 15


    return 0;
}