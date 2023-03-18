#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a=1;
    for(int i=1; i<=n; i++)
    {
        a=a*i;
    }
    printf("%d", a);
    
    return 0;
}