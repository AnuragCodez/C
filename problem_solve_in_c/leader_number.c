// given an unsorted array find out the (leader element) - all element must be less than given element // 

#include<stdio.h>
int main()
{
     
     int t,n,c;
     scanf("%d",&t);
n=t-1;
c=t;

int a[n];

for(int i=0; i<n; i++)
{
   scanf("%d",&a[i]);
}
for(int i=1; i<n; i++)
{
while (c!=0)
{
    if (a[c-2]<a[n-i-1])
    {
        printf("%d\n",a[n-i-1]);
    }
    else(a[c-2]==a[n-i-1]);
        printf(" ");
    
   
 c--;
}
}
return 0;
}
