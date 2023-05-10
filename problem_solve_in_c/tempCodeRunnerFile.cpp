#include<stdio.h>
#include<climits>
int main()
{
   int a[]={-10,-3,5,6,2};
   int n,b,c,d,i,j;
   int prod2=__INT_MIN__;
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
   cout<<prod1;

return 0;
}