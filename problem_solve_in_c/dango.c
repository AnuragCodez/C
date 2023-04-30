// given an array of size n-1, n numbers are filled in this array but one number is missing. 
//find that number. It contains all numbers upto n but one number is missing.the array is not sorted.

#include<stdio.h>
int main()
{
    int m,i,sum=0;
    scanf("%d",&m);

    int a[m-1];

for ( i = 0; i<m; i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}

printf("%d \n",sum);

printf("number missing is %d",(m*(m+1))/2-sum);

return 0;
}