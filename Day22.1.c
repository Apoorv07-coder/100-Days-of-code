//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, ld, i, fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num > 0) {
        ld = num % 10;

        fact = 1;
        for(i = 1; i <= ld; i++)
            fact = fact * i;

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == originalNum)
        printf("%d is STRONG NUMBER\n", originalNum);
    else
        printf("%d is NOT STRONG NUMBER\n", originalNum);

    return 0;
}


