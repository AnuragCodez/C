#include<stdio.h>
 
int swap(int x, int y)
{
    // let x=1 and y =2//
    int z;
    
    z=x;
    x=y;
    y=z;
    printf("%d %d",x , y);
}

int main()
{
    int a,b;
    scanf("%d  %d",&a, &b);
    swap(a,b);
}