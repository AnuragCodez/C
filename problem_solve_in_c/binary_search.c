#include<stdio.h>
int main()
{
      int n;
      int i;
   scanf("%d",&n);

   int arr[n];

for ( i = 0; i <n; i++)
{
   scanf("%d",&arr[i]);
}

printf("Enter number to be search");
int a;

scanf("%d",&a);

int m;
 m=(arr[0]+arr[n-1])/2;
while (arr[m]!=a && arr[0]<=arr[n-1])

{
    if (a>arr[m])
    {
        arr[0]=m+1;
    }
    else
    {
       arr[n-1]=m-1;
    }
    
    m=(arr[0]+arr[n-1])/2; 
}

if (arr[m]=a)
{
   printf("Found array at position %d and value is %d ",m,a);
}
else
{
    printf("not found");
}

return 0;
}