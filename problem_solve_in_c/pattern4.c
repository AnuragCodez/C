#include<stdio.h>
int main()
{
   for (int i = 1; i <=4; i++)
   {
      for (int j=1; j<=i; j++)
      {
        printf("* ");
      }
      printf("\n");
   }
   
   for (int i =1; i<=3; i++)
   {
     for (int k =3; k>=i; k--)
     {
        printf("* ");
     }
     printf("\n");
   }
   
return 0;
}
