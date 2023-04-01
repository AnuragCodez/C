#include<stdio.h>
int main()
{
   // precedence of * is greater than +//
   // ++ , = oprates in left to right //

int a ,b;
a= 5* 2+3;
b=7;
int c= ++b*8;

printf("%d\n",c);
printf("%d",a);

return 0;
}
