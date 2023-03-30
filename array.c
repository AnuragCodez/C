#include<stdio.h>
#include<math.h>
int main()
{
    // Array is collection of same type of data, in contiguous memory location.//
  //value stored in array is of same size//
// Array can be of form list and table.  

/* int marks[4];

marks[0] = 45;
 marks[1] = 96;
  marks[2] = 100;
   marks[3] = 100;
   printf("%d %d %d %d",marks[0],marks[1],marks[2],marks[3]);
   */

   int marks[4] = {23,45,65,87};

for (int i = 0; i<4; i++)
{
   printf("Enter the Value of %d elements of the Array",i);
scanf("%d", &marks[i]);
}
for (int i = 0; i < 3; i++)
{
    printf("The value of %d elements of the array is %d\n",i,marks[i]);
}
return 0;
}
