#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
   int a[n];

for(int i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}
int j=0;
int k= n-1;
while(j<n && k>0)
{
    if(a[j++]==a[k--])
    {
       temp=1;
    }
    
}
if(temp==1)
{
     printf("palindrome");
}
else
    {
        printf("not a palindrome");
    }
    
return 0;
}
