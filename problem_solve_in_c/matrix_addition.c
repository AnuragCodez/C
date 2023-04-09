#include<stdio.h>
#include<math.h>
int main()
{
printf("What is the size of your matrix ?");
int p;
scanf("%d",&p);
int q;
scanf("%d",&q);
int a[p][q];

for (int i = 0; i <p; i++)
{
    
   for (int j = 0; j <q; j++)
   {
    scanf("%d",&a[i][j]);
   }
}

int b[p][q];

for (int i = 0; i <p; i++)
{
    
   for (int j = 0; j <q; j++)
   {
    scanf("%d",&b[i][j]);
   }
}
int i,j;
int c[p][q];

for (int i = 0; i < p; i++)
{
  for (int j = 0; j <q; j++)
  {
    c[i][j] = a[i][j]+b[i][j];
  }
}

for (int i = 0; i < p; i++)
{

  for (int j = 0; j <q; j++)
  {
    printf("%d",c[i][j]);
  }
  printf("\n");
}

return 0;
}
