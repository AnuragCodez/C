#include<stdio.h>
int main()
{
    int n;
  
        printf("enetr number of rows");
        scanf("%d", &n);

        /* Program to print:
        *****
         ***
          *
        */

        // for(int i=1; i<=n; i++)
        // {
        //     for(int j=2; j<=i; j++)
        //     {
        //         printf(" ");
        //     }

        //     for(int k=n-i+1; k>0; k--)
        //     {
        //         printf("*");
        //     }

        //     for(int k=1; k<n-i+1; k++)
        //     {
        //         printf("*");
        //     }

        //     printf("\n");
        // }
    
    for(int i=1; i<=n; i++)
    {
        for(int k=2; k<=i; k++)
        {
            printf(" ");
        }

        for(int j=n; j>=i; j--)
        {
            printf(" *");

        }
        printf("\n");
    }

return 0;
}
