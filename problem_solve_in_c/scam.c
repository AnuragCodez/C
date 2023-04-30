#include<stdio.h>
int main()
{
   char B,A='A';
int D;
int C;
printf("Please Enter the value of B\nC\nD\n");
scanf("%c\n %d\n %d", &B,&C,&D);
printf("%c\n %c\n %d\n %d",A,B,C,D);
return 0;
}


#include<stdio.h>
int main()
{
    int total_cost;
   int basic_cost,excise_duty,sales_taxes,insurance,road_taxe;

printf("enter your basic cost\n");

   scanf("%d",&basic_cost);

excise_duty= (basic_cost*15)/100;
sales_taxes=(basic_cost*10)/100;
insurance=(basic_cost*5)/100;
road_taxe=(basic_cost*1)/100;

printf("%d\n %d\n %d\n %d\n",excise_duty,sales_taxes,insurance,road_taxe);

total_cost=excise_duty+sales_taxes+insurance+road_taxe;

printf("%d",total_cost);
return 0;
}

#include<stdio.h>
int main()
{
   
int x,c=0;
int a;

scanf("%d",&x);

   while(x!=0)
   {
      a=x%10;
      c=(c*10)+a;
      x=x/10;
   }
   
  printf("%d",c);

return 0;
}
