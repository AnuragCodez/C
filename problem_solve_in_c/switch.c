#include<stdio.h>
#include<ctype.h>
int main()
{
    char choice;
   switch (choice=toupper(getchar()))
   {
   case 'R':
    printf("RED\n");
    break;
   case 'G':
   printf("GREEN\n");
   break;
   default:
   printf("invalid choice\n");
    break;
   }
return 0;
}
