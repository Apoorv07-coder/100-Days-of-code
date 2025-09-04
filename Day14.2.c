//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main(){   
    int n, i;
    int product = 1;
    int has_even = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) { 
            product *= i; 
            has_even = 1; 
        }
    }

    if (has_even) {
        printf("Product of even numbers from 1 to %d is: %d\n", n, product);
    } else {
        printf("No even numbers in the range from 1 to %d.\n", n);
    }

    return 0;
}