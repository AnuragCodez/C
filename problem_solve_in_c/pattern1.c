#include<stdio.h>
int main()
{
    int n,num=0;
    scanf("%d",&n);
   for (int i = 1; i<=n; i++)
   {
     for (int j = 1; j<=(n-i); j++)
     {
        printf(" ");
     }

     num = i;
     for (int k = 1; k<=i; k++)
     {
       printf("%d",--num);
     }
    for(int l=2; l<=i; l++)
     {
        printf("%d",++num);
     }
     printf("\n");
   }

return 0;
}
