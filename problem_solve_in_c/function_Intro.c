#include<stdio.h>

int avg(int *x[])
{
    int a[1000],n,sum=0,avg;
    n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
       sum+=a[i];
    }
    avg=sum/n;
    return avg;
}

int main()
{
   int a[10000],n;
   printf("Enter the size of array=");
   scanf("%d",&n);
   printf("Enter the numbers=");
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   avg(a[n]);
   
return 0;
}
