#include<stdio.h>
int main()
{
    // sum of n factorial numbers //
   int sum=0, n , count, j;
j = 1;

   scanf("%d",&n);

   for (int i = 1; i <=n ; i++)
   {

    j=j*i;
    sum = sum+j;

   }
   printf("%d",sum);
return 0;
}
