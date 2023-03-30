#include<stdio.h>
int chinmay (int x , int y )
{
    return x*y;
    
}

int main()
{
   int chinmay (int , int); //declartion 

   int sum=0;

   int a=2, b=3, c=4 , d=6;
   int ans=chinmay(a,b); 
   //call i.e use 
   int dash =chinmay(c,d);

   printf("%d\n",ans);
   printf("%d\n",dash);


return 0;
}
