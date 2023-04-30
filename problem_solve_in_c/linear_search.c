#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);

   int arr[n];

for (int i = 0; i <n; i++)
{
   scanf("%d",&arr[i]);
}

printf("Enter number to be search");
int a;
scanf("%d",&a);

for (int i = 0; i <n; i++)
{
    if (arr[i]==a)
    {
        printf("found number");
        break;
    }
}

        

return 0;
}
