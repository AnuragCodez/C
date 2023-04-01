#include<stdio.h>
int main()
{
   int i,sum =0;
   scanf("%d",&i);
while (i!=0)
{
    sum =sum +i%10;
    i =i/10;
}
printf("sum of digit of number %d is", sum);
return 0;
}
