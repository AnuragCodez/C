#include<stdio.h>
#include<process.h>
#include<stdlib.h>

int main()
{
   int a[4] ={2,3,2,3};
   int b[4] = {3,2,4,3};
int c=1;
   for (int i = 0; i <=3; i++)
   {
      if (a[i]== b[i])
      {
        printf("%d",c);
        break;
      }
      else
      {
        printf("0");
      }
      
   }
   

   
return 0;
}
