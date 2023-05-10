#include<stdio.h>
int main()
{
   int a=3;
   int *p;
   p=&a;
   int b;
   b=*p;
   int *q;
   q=&b;

   printf("%d\n",a);
printf("%d\n",p);
  printf("%x\n",*p);
  printf("%d\n",b);
  printf("%d\n",q);
printf("%x",*q);

return 0;
}

#include<stdio.h>
int main()
{
   int a,b;
   int c=5;
   int *p;

   a=4*(c+5);

   p=&c;
   b=4*(*p+5);
   printf("a=%d b=%d\n",a,b);

return 0;
}

#include<stdio.h>
int main()
{
   int *p1,*p2;
   int i,j,x=5,y=8;
   scanf("%d %d",&i,&j);
p1=&x;
p2=&y;
printf("%d %d\n",p1,p2);
   p1=p1+1;
   p2=p1+j;
   p2++;
   p2=p2-(i+j);
printf("p1=%d p2=%d",p1,p2);
return 0;
}


#include<stdio.h>
int main()
{
   
   printf("%d\n",sizeof(int));
 printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
     printf("%d\n",sizeof(char));

return 0;
}