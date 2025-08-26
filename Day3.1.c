//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main(){
    int C;
    printf("Enter Temperature in Celsius :");
    scanf("%d",&C);
    int  F = (C * 9/5) + 32;
    printf("Hence, the temperature in Farenheit is : %d",F);
    return 0;

}
