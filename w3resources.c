#include<stdio.h>
#include<math.h>
  int prime(int x){
    int c =0;

  for (int i = 2; i <=sqrt(x); i++)
  {
    if (x%i==0)
    {
      c++;
    }

    if(c==0)
    {
        return 1;
    }
    else{
        return 0;
    }
  }
  
  }


int main()
{
   int prime(int);
int a;
printf("enter your value");
scanf("%d",&a);

int b=prime(a);
if (b==0)
{
    printf("%d num is  not prime",a);
}
else{
printf("%d num is prime",a);
}
return 0;
}
