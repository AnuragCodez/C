// selection sort//
// #include<stdio.h>
// int swap(int *x,int*y)
// {
//    int temp;
//    temp=*x;
//    *x=*y;
//    *y=temp;
// }

// int main()
// {
// int i,j,n;
// printf("\nEnter the number of element\n");
// scanf("%d",&n);
// int a[n];
// printf("Enter value\n");
// for(int i=0; i<n; i++)
// {
//    scanf("%d",&a[i]);
// }
// printf("new array\n");
// for(int i=1; i<=n; i++)
// {
//    for (int j=0; j<=i; j++)
//    {
//      if (a[j]>a[j+1])
//      {
//         swap(&a[j],&a[j+1]);
//      } 
//    } 
// }
// for (int i = 0; i <n; i++)
// {
//     printf("%d ",a[i]);
// }

// return 0;
// }

// selection sort//

#include<stdio.h>
#include<string.h>
int main()
{
char p[20];
char *s = "string";
int length = strlen(s);
int i;
for(i=0; i<length; i++)
{
      p[i]= s[ length - i ];
 printf("%s", p[i]);
}
return 0;
}
