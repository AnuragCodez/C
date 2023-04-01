#include<stdio.h>
int main()
{
   int lar[4] = {34, 234, 32, 43};

int i;
 int c=lar[0];

for ( i = 0; i <4; i++)
{
    if (lar[i]>c)
    {
      c=lar[i];
    }

}
    printf("%d",c);
   
return 0;
}
