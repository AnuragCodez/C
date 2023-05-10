#include<stdio.h>

 int minval=__INT_MAX__;
  int min(int a[],int n)
{
for(int i=0; i<n; i++)
{
   if (a[i]<minval)
   {
    minval=a[i];
   }
}
return minval;
}

int swap_(int *x, int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}

int sortedarr(int a[],int n)
{
    int i,j;
   for ( i = 0; i <=n-2; i++)
   {
      int minval=i;
for (  j= i; j < n-1; j++)
{
    if (a[j]<a[minval])
    {
        minval=j;
    }
}
swap_(&a[i],&a[minval]);

   }
   
}

void printarray(int a[],int n)
{
   for( int i=0; i<n; i++)
   {
      printf("%d",a[i]);
      printf("\n");
   }
}

int main()
{
 int b,i;
 scanf("%d",&b);
 int a[b];
 for(int i=0; i<b; i++)
 {
    scanf("%d",&a[i]);
 }
sortedarr(a,b);
printf("sorted array\n");
printarray(a,b);

printf("min value\n");
int c=min(a,b);
printf("%d",c);

return 0;
}
