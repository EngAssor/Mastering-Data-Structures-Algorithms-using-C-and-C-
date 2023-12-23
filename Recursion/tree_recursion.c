#include<stdio.h>
void fun(int n) 
{
    if (n>0)
    {
        printf("%d ",n);
        fun(n-1);
        fun(n-1); // note here u call again this will make it a teree recursion
    }
}
int main()
{
    int x=3;
    fun(x);
}