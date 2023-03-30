#include<stdio.h>

    // pointer defines memory address to special type of variable//
    // int *p;
    // p=&a;

int main()
{
   int a=1;
   int *p;
   p=&a;
   printf("%d",*p);

char b='A';
char *q = &b;

printf("%p",q);

return 0;
}
