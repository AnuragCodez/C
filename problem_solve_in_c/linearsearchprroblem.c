#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[9] ={1,2,3,4,1,7,8,1,0};
int key =1;
int count = 0;

    for (int i = 0; i <=8; i++)
    {
    if (a[i]==key)
    {
        printf("key found at %d\n",i);
        count++;
    }
    else
    {
        printf("not found\n");
    }
    
   }
        printf("%d",count);

return 0;
}
