
#include<stdio.h>
int main()
{

   char arr[5] = {'n','i','t','i','n'};

   int c=0;

   for(int i=0; i<5; i++)
   {
      if(arr[i]!=arr[(5-i)-1])
      {
         c++;
      }
   }

   if(c==0)
   {
      printf("string is palindrome");
   }
   else
   {
      printf("string is not palindrome");
   }

   return 0;
}
