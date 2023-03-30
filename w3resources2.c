#include<stdio.h>
void swap(int *y, int *x)//defin
{
    int p;
    p=*y;
    *y = *x;
    *x = p;
}
int main()
{
   
   void swap(int* ,int*);
    int a=2, b=4;
    swap(&a,&b);
    printf("%d %d", a, b);
    
return 0;
}
