#include<stdio.h>
int fact(int n)
{
    int f;

    for (f=1 ; n>1; n--)
    {
        f=f*n;
    }
    return f;

}
int ncr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int j;
   for (int i = 0; i <6; i++)
   {
    for ( j = 1; j <=6-i; j++)
    {
        printf(" ");
    }
    for (int j= 0; j<=i; j++)
    {
      int c=  ncr(i,j);
        printf("%d ",c);
    }
    
    printf("\n");
   }
   
return 0;
}
