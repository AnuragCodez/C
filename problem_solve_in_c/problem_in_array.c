#include<stdio.h>
int main()
{
   int sum =0;
int num[5];
   for (int i = 0; i <5; i++)
   {
   printf("Enter Your Number");
   scanf("%d\n",&num[i]);

   sum = sum+num[i];
   }
   
printf("%d",sum);
return 0;
}
