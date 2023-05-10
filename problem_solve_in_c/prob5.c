#include<stdio.h>

int maxpro(int x)
{
       int a[x],b[1000];
int max;
for (int i = 0; i < x; i++)
{
   scanf("%d",&a[i]);
}

for (int i = 0; i < x; i++)
{
    for (int j = i+1; i < x; j++)
    {
       b[i] =a[i]*a[j];
    }
}


}

int main()
{
   int n;
scanf("%d",&n);
int y= maxpro(n);
printf("%d",y);
return 0;
}
