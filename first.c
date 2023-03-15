#include<stdio.h>
int main()
{

  int a;
  printf("enter the value of a\n");
  scanf(" %d",& a);  
    switch (a)
    {
    case 1: printf("Monday\n");
       break;

    case 2: printf("Tuesday\n");
       break;

    case 3: printf("Wednesday\n");
       break;   

    case 4: printf("Thrusday\n");
       break;

    case 5: printf("Friday\n");
       break; 

    case 6: printf("Saturday\n");
       break;

    case 7: printf("Sunday\n");
       break; 

    default: printf("value is false\n");
        break;
    }      

printf("enter the value between 1-7\n");
   
}
