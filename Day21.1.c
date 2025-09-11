//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main() {
    int n, fd, ld, digits = 0, temp, swappedNumber;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    ld = n % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    fd = temp;
    swappedNumber = (ld * pow(10, digits)) + (n % (int)pow(10, digits) - ld) + fd;
    printf("Number after swapping: %d\n", swappedNumber);
    return 0;
}

