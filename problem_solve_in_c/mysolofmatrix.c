#include<stdio.h>
int main()
{
   int a[3][3];
printf("Enter your value");

   for (int i = 0; i < 3; i++)
   {
    for(int j=0; j<3; j++)
    {
    scanf("%d",&a[i][j]);
    }
   }
   
   for (int i = 0; i < 3; i++)
   {
    for(int j=0; j<3; j++)
    {
    printf(" %d",a[i][j]);
    }
    printf("\n");
   }
int sum =0;

for (int i = 0; i < 3; i++)
{
    int rsum =0;
    for (int j = 0; j < 3; j++)
    {
        rsum=rsum+a[i][j];
    }
    sum = sum +rsum*rsum;
}
printf("%d",sum);
return 0;
}
