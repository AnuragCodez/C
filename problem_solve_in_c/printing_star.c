#include<stdio.h>
int main()
{
   int row,ROW,col,COL;
row=1; ROW=4;
   while (row<=ROW)
   {
    col=1;
while (col<=row)
{
    printf("*");
col++;
}
printf("\n");
row++;
   }
   

return 0;
}
