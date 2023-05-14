#include<stdio.h>
int main()
{
int num;

   for (int i = 1; i<=5; i++)
   {
      for (int j=1; j<=5-i; j++)
      {
         printf(" ");
      }
      num=i;
      for (int k =1; k<=i; k++)
      {
         printf("%d ",num );
      }
      
      printf("\n");
   }

return 0;
}
