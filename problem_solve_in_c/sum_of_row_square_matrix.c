#include<stdio.h>
int main()
{
   int A[3][3];

   for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    {
        scanf("%d", &A[i][j]);
    }
   }

      for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    {
        printf(" %d", A[i][j]);
    }
    printf("\n");
   }

   int sum =0;
for(int i=0; i <3; i++){
    int rsum=0;
for (int j = 0; j < 3; j++)
{
    rsum=rsum+A[i][j];
}
sum=sum+(rsum*rsum);
}

printf("%d",sum);

return 0;
}
