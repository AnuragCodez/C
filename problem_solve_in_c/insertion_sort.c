#include<stdio.h>
int swap_(int *x, int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}
int insertionsort(int a[],int n)
{
    int pos;
    for(int i=0; i<n; i++)
{
    int j=0;
    for( j=0; j<n; j++)
    {
       if(a[j]>a[j+1])
       {
          swap_(&a[j+1],&a[j]);
       }
    }
}
}

    void printarr(int a[],int n)
    {
        for(int i=0; i<n; i++)
        {
        printf("%d",a[i]);
        printf(" ");
        }
    }


int main()
{ 

int n;
scanf("%d",&n);
int a[n];

for(int i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}
insertionsort(a,n);
printf("Sorted Array\n");
printarr(a,n);


return 0;
}
