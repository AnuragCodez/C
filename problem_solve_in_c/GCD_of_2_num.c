#include<stdio.h>
int main()
{
   int a,b,count;
   printf("Enter two numbers\n");
   scanf("\n%d \n %d",&a ,&b);

if (b>a)
{
    while (b%a!=0)
    {
        count = b%a;
        b=a;
        a= count;
    }
    printf("%d",a);
}

return 0;
}
