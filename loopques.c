#include<stdio.h>
int main()
{
   int a,i;
   printf("Enter Your Number");
    scanf("%d",&a);
    int sum=0;
    for(i=0;i>=0;i++)
    {
    int k= a%10;
    printf("%d\n", k);
    sum=sum+k;
    a= a/10;
    if(a==0) break;

    }
    printf("%d",sum);


return 0;
}
