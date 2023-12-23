/**
 * using static variable with recursion 
 * note that when u call recursion function it creats a new stack evrey time and creat new copy of local vareables 
 * when u choose to creat a static vareable or a global one it wolud be stored at .data section so it will keep it's value
*/
#include <stdio.h>

int fun(int n)
{
    static int x =0;
    if(n>0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;

}
int main(void)
{
    int n =5;
    printf("%d ",fun(n));
}