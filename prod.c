#include<stdio.h>
#include<limits.h>
int main()
{
   int a[]={-10,34,5,23,35,345,324,23,6,2};
   int n,b,c,d,i,j;
   int prod2=INT_MIN;
   int prod1=1;
   n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
        prod1=a[i]*a[j];
        if(prod1>prod2)
        {
            prod2=prod1;
        }
    }
   }
   printf("%d  %d  %d",prod2,i,j);

return 0;
}
