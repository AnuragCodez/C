#include<stdio.h>
int main()
{
    int n;
       printf("Enter Value of n");
scanf("%d",&n);
   int sum[n];

   for (int i = 0; i < n; i++)
   {
    printf("Enter the Value of Each Array %d",i);
    scanf(" %d",&sum[i]);
   }
   
 for (int i = 0; i < n; i++)
 {
  
   printf("%d\t",sum[i]);
 }
 
int c= 0;

for (int i = 0; i < n; i++)
{
   c = c+ sum[i];
}
printf("%d",c);

return 0;
}
