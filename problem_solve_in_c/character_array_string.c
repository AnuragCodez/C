#include<stdio.h>
#include<stdlib.h>
int main()
{
   
   char ch;
char line[5];

for (int i = 0; i <=5; i++)
{
    scanf("%s",line[i]);
}

   int c=0;

   do
   {
    ch = getchar();
    line[c] =ch;
    c++;

   } while (ch!='\n');
   
c =c-1;
line[c] ='\0';

return 0;
}
