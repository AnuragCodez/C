#include<stdio.h>
int doublicate(int x)
{
   int a[x];

for (int i = 0; i < x; i++)
{
   scanf("%d",&a[i]);
}

   for (int i = 0; i <x; i++)
   {
      for (int j = i+1; j <x; j++)
      {
         if (a[i]==a[j])
         {
            return a[i];
         }
      }
      
   }
}

int main()
{
   
   int n;
scanf("%d",&n);
int y= doublicate(n);
printf("%d",y);
return 0;

}
