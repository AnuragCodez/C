#include<stdio.h>
//Double Pointer
int main()
{
    int a=1;
    int *p;    // * = Address of Variable //
    p=&a;
    int **k;
    k=&p;

   printf("%p\n",k);
       printf("%p\n",*k);
   printf("%p\n",p);
       printf("%p\n",*p);
   printf("%d",a);

return 0;
}
