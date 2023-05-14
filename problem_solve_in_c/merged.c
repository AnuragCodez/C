#include<stdio.h>

void merged(int a[],int b[],int n)
{
     int m[n];
    int i=0,j=0,k=0;

    while(i<5)
    {
        m[k++]=a[i++];
    }

     while(j<5)
    {
        m[k++]=b[j++];
    }

printf("merged array\n");

for(int i=0; i<10; i++)
{
    printf("%d",m[i]);
    printf(" ");
}
}


int main()
{
    int n;
    scanf("%d",&n);
   int a[n],b[n];
   for(int i=0; i<n/2; i++)
   {
     scanf("%d",&a[i]);
   }

    for(int j=0; j<n/2; j++)
   {
     scanf("%d",&b[j]);
   }

merged(a,b,n);
return 0;
}
