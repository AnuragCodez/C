#include<stdio.h>
void swap(int *x,int*y)
{
  int t;
  t=*x;
  *x=*y;
  *y=t;
}

int transpose(int a[],int n, int m)
{
    int i,j,a[][];
    while(i<n && j<m){
   swap(&a[i][j],&a[j][i]);
    }
}

int print(int a[],int n,int m)
{
    int a[][];
    for(int i=0; i<n; i++)
   {
    for(int j=0; j<m; j++)
    {
      printf("%d",a[i][j]);
    }
    printf("\n");
   }
}

int main()
{

  int n,m;
  scanf("%d %d",&n,&m);
  int a[n][m];
   
   for(int i=0; i<n; i++)
   {
    for(int j=0; j<m; j++)
    {
        printf(" Enter value at- %d%d ",i,j);
      scanf("%d",&a[i][j]);
    }
    printf("\n");
   }
   
   transpose(a,n,m);

print(a,n,m);

return 0;
}