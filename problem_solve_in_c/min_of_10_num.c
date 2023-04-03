#include<stdio.h>
int main()
{
   int min;
   
int MIN[10] = {23,44,5,4,52,5,3,52,521,65};
min = MIN[0];

for (int i = 0; i <10; i++)
{
    if (min > MIN[i])
    {
        min =MIN[i];
    }
}
printf("%d",min);
return 0;
}
