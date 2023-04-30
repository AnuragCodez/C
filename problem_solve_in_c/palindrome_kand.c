
#include <stdio.h>
int main()
{

   int n;
   scanf("%d", &n);
   char arr[n + 1];

   for (int i = 0; i <= n; i++)
   {
      scanf("%c", &arr[i]);
   }
   for (int i = 0; i <= n; i++)
   {
      printf("%c", arr[i]);
   }
   //  printf("\n%c",arr[0]);
   // printf("%c",arr[1]);

   // printf("%c",arr[2]);

   // printf("%c",arr[3]);

   // printf("%c",arr[4]);
   // printf("%c",arr[5]);
   int c = 0;

   for (int j = 1; j <= n / 2; j++) // yaha pe j=1 liya hai cauz j=0 pe null vakue aa rhi thi even idk why 
   {
      if (arr[j] != arr[n - j + 1])
      {
         c++;
      }
   }

   if (c == 0)
   {
      printf("\nisP");
   }
   else
   {
      printf("\nNP");
   }

   return 0;
}