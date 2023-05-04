#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
int a[n];
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   int temp=2,s,c=0;
scanf("%d",&s);

for(int i=0; i<5; i++)
{
   if (a[i]!=s)
   {
      c++;
   }
   else
   {
      printf("%d found at array index %d",s,c);
   }
}
return 0;
}
