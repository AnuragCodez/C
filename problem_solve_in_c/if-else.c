#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter the value of a b c");

scanf("%d %d %d",&a,&b,&c);

int d = b*b -4*a*c;

if (d==0)
{
  printf("roots are real and equal");
}
else if (d>0)
{
   printf("Roots are real and distinct");
}
else
{
    printf("roots are imaginary");
}


return 0;
}
