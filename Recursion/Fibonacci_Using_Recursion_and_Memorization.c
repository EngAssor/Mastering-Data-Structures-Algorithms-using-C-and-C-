#include<stdio.h>
/*in oreder to reduce the number of function call
* we use memrization to not call the sum that we allready called 
*/
int F[10];// maxmum number of calls must be 10
int MemFib(int n)
{
    int t0=0,t1=1,s=0,i;
    if(n<=1)
     {
           F[n]=n;
           return n;
    
     }
     else
    {
         if(F[n-1]==-1)
         {
            F[n-1]=MemFib(n-1);
         }
         if(F[n-2]==-1)
         {
            F[n-2]=MemFib(n-2);
         }
         return F[n-1]+F[n-2];
    }

}


int main()
{
    int i ;
    for(i=0;i<10;i++)//initializ the array with -1
        F[i]=-1;
    
    printf("%d",MemFib(5));

    return 0;
}