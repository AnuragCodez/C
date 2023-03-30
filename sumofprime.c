#include<stdio.h>
#include<math.h>
    int isprime(int x)
   
    {
         int c=0;
for (int i = 2; i <=sqrt(x); i++)
{
    if (x%i==0)
    {
        c++;
        
    }
}
    if (c==0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
    } 



int main()
{
   int isprime(int);

        int a;
        printf("Enter Your Value");
        scanf("%d",&a);
    
    int c,d;

    int i,j;

    for (int i = 2; i <a; i++)
    {
        for (int j = 2; i <a; j++)
        {
            c=isprime(i);
            d=isprime(j);

            if (c==1 && d==1 && i+j==a)
            {
                printf("%d %d",i,j);
            }
            
        }
        
    }
    

return 0;
}
