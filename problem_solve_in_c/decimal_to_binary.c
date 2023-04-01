#include<stdio.h>
int main()
{
   int binary = 0, n, rem,base =1;
   printf("Enter your number");
scanf("%d",&n);

while (n>0)
{
    rem = n%2;
binary = binary + rem*base;
base = base*10;
 n = n/2;
}
printf("%d",binary);

return 0;
}
