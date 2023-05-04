#include<stdio.h>
int main()
{
   int a,b,count=0,c[100],i=0;
   scanf("%d",&a);
   while(a>0)
   {
    b=a%10;
    a=a/10;
    c[i]=b;
    i++;
    count++;
   }
     int x[10]={0,0,0,0,0,0,0,0,0,0};
   for(int i=0; i<count; i++)
   {
  
    if(c[i]==0)
    x[0]++;
    else if(c[i]==1)
    x[1]++;
    else if(c[i]==2)
    x[2]++;
    else if(c[i]==3)
    x[3]++;
    else if(c[i]==4)
    x[4]++;
    else if(c[i]==5)
    x[5]++;
    else if(c[i]==6)
    x[6]++;
    else if(c[i]==7)
    x[7]++;
    else if(c[i]==8)
    x[8]++;
    else if(c[i]==9)
    x[9]++;
   }
   printf("%d\n",x[3]);
return 0;
}