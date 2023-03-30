#include<stdio.h>
int main()
{
    int a =8;
    int* p = &a; 

    
// * denotes the values pointer points/ dereference operators.

printf("%p\n",p); // p me a ka address bhara hai//
    printf("%p\n",&a); // address of a print kr do//
printf("%d\n",a); //a ki value//
    printf("%p\n",&p);  // p ka address print kr do//
printf("%d",*p); // pointer p jisko point kr rha hai uski value print kr do//

return 0;
}
