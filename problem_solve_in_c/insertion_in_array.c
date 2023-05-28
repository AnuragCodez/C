#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int add(int a[],int n)
{
    int x,value;
    printf("\nenter the element position to add.\n");
    scanf("%d",&x);
    printf("\nvalue of element to add\n");
    scanf("%d",&value);

int i,j;
for (i= 0; i<n; i++)
{
    n++;
    if (i==x)
    {
        j=n;
        while(j>x)
        {
            swap(&a[j],&a[j-1]);
            j--;
        }
        a[x]=value;
    }
}
}
void printarr(int a[],int n)
{
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n=10000;
   int a[n];
   n=5;
   printf("\ninput your value\n");

for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
add(a,n);
printf("\nnew array\n");
printarr(a,n);
return 0;
}
