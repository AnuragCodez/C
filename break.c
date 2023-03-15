#include<stdio.h>
int main()
{
   int i;
int age;
    for ( i = 0; i< 10; i++)
    {
        printf("Enter Your Age %d\n",i);
        scanf("%d\n",& age);
        if(age>10){
            printf("Your Age Is Invalid For This Condition");
    break;
        }
    }
}
   

   

