#include<stdio.h>
int c;
int freqofnum(int n,int x)
{
    c=0;
   while (n!=0)
   {
    if (n%10==x)
    {
       c++; 
    }
    n=n/10;
   }
   
return c;

}

int main()
{

int n,x;

scanf("%d %d",&n,&x);

int d= freqofnum(n,x);
printf("%d",d);
return 0;
}
