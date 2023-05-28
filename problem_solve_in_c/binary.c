#include<stdio.h>    
int main()
{ 
    int a[10],n,i,count=0;
   printf("Enter the number to convert: ");
   scanf("%d",&n);    
   for(i=0;n>0;i++)    
   {
       a[i]=n%2;
       n=n/2;
       count++;    
   }    
   printf("\nBinary of Given Number is=");
   int b[2]={0};
   for(i = 0; i<count; i++)
   {
      b[a[i]]++;
   }
   for(i=i-1;i>=0;i--)
   {
      printf("%d",a[i]);
   }    
   printf("\n");
   printf("Frequency of 0 is %d\n",b[0]);
   printf("Frequency of 1 is %d",b[1]);
   return 0;  
}  
