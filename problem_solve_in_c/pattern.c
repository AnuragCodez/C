#include<stdio.h>
int main()
{
   int n,j;
    scanf("%d",&n);

  for (int i = 1; i <=n; i++)
  {
    for (int j= n-1; j>=i; j--)
    {
       printf("  ");
    }
    for (int j= 1; j<=2*i-1; j++)
    {
      printf("* ");
    }
   
    
    printf("\n");
  }

return 0;
}
