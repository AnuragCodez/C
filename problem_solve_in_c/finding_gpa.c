#include<stdio.h>
int main()
{
   int credsum=0 , gpsum=0  ,nsub=8;
int grade[nsub], cred[nsub];

printf("Enter your gr points, credits for six subjects");
for (int i = 0; i < nsub; i++)
{
    scanf("%d %d ", &grade[i], &cred[i]);
}

for (int i = 0; i < nsub; i++)
{
    gpsum = gpsum+ grade[i]*cred[i];
    credsum = credsum+ cred[i];
}
float gpa = gpsum/credsum;
printf("Your GPA is %f",gpa);
return 0;
}
