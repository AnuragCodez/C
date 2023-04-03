#include<stdio.h>
#include<math.h>
int main()
{ 
float mean;
int sum=0 ;
float count=0;
int n=3;
int X[n];

for (int i = 0; i <n; i++)
{
   printf("Enter value");
    scanf("%d",&X[i]);

    sum= sum+X[i];
}
mean =sum/n;
printf("%f\n",mean);

for (int i = 0; i < n; i++)
{
    count = count + (X[i]-mean)*(X[i]-mean);
}

float dash = count/n;
printf("%f",sqrt(dash));

return 0;
}
