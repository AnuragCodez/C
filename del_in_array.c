//Write a program to read an array of 10 numbers from a user and delete the element at the 5th position.

#include <stdio.h>

int main() {
    int j, i, a[100], n, key, l;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the element position to delete:");
    scanf("%d", &key);
    l = n;  
    for (i = 0; i < l; i++) {
        if (i == key) {
           for (j = i; j<l; j++)
            {
               a[j] = a[j + 1];
            }
           l--;    
        }
    }
    printf("\nThe new array is \n");
    for (i = 0; i < l; i++)
        printf("%d ", a[i]);
}
