//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main(){
    int n, sum=0, r;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}