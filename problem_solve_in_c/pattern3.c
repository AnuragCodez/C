#include<stdio.h>
int main()
{
    int num,t=0;
   for (int i = 1; i <=4; i++)
   {
     for (int j =1;  j<=4-i; j++)
     {
        printf(" ");
     }
num=i;
     for (int k =1; k<=i; k++)
     {
        printf("%d",num);
        num++;
     }
     num=2*t;
     for (int j = 2; j <=i; j++)
     {
        printf("%d",num);
        num--;
     }
     t++;
     printf("\n");
   }

return 0;
}
