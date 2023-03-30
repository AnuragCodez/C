// #include<stdio.h>
// int main()
// {
//    int b,n;
//    printf("enter your value");
//    scanf("%d",&n);
//  b=1;
// for(int i=1; i<=n; i++)
// {
// b= i*b;
// }
// printf("%d",b);
// return 0;
// }

#include<stdio.h>
int main()
{
  int n,a;
  a=1;
  printf("Enter Your Value");
  scanf("%d",&n);
   for (int i = n; i >1 ; i--)
   {
    a=a*i;
   }
   printf("%d",a);

return 0;
}
