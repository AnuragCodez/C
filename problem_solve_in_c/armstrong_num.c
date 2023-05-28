#include<stdio.h>
int main()
{  int x,a=0;
   printf("Enter Your number\n");
   scanf("%d",&x);
   int y,z,b=x;
   while (x>0)
   {z=x%10; 
    a+=z*z*z;
    x/=10;}
   if (a==b)printf("armstrong");
   else printf("not a armstrong");
   return 0;}
