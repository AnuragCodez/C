#include<stdio.h>
int main ()
   
{
    int n;

   printf("enter a number");
   scanf("%d", &n);

   if(n%2==0)
   goto even;
   
   else
   goto odd;

      even: 
   {   printf("number is even");
   return 0;
   }


   odd:
   {   printf("number is odd");
   }


   printf("hello");

return 0;
}
