#include<stdio.h>

long db(int x)
{
   int b=0,rem,f;
   f=1;
   while (x!=0)
   {
    rem= x%2;
    b=b+rem*f;
    f=f*10;
    x=x/2;
   }
   
  return(b);
}

int main()
{

   long db(int);
int a=11;

long b=  db(a);

printf("%ld",b);
 
return 0;
}
