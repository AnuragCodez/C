#include<stdio.h>

int printrow(int row)
{
    long long ans=1;
    printf("%d  ",1);
    for(int i=1; i<row; i++)
    {
        ans=ans*(row-i);
        ans=ans/i;
        printf("%d  ",ans);
    }
}

int main()
{
    int n;  
    scanf("%d",&n);
for(int i=1; i<=n; i++)
{
    printrow(i);
    printf("\n");
}
return 0;
}
