// // printing star in row and column wise//
// #include<stdio.h>
// int main()
// {
// char star;
// star= '*'; 
// for (int i = 1; i <=3; i++)
// {
//     for (int j = 1;  j<=5; j++)
// {
//    printf("%c",star); 
// }
//    printf("\n");
// }
// return 0;
// }

#include<stdio.h>
int main()
{
   int r ,R, c,C;
r=1; R=3; C=5;
while (r<=R)
{
    c=1;
while (c<=C)
{
    printf("*");
    c++;
}
printf("\n");
 r++;
}
return 0;
}
