#include<stdio.h>
int main()
{
   int n,num=1;
   scanf("%d",&n);

   for(int i=1; i<n/2; i++)
   {
      for(int j=0; j<i; j++)
      {
         printf("%d",num);
      }
      num++;
      printf("\n");
   }

return 0;
}
