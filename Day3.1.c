#include<stdio.h>
int main(){
    int C;
    printf("Enter Temperature in Celsius :");
    scanf("%d",&C);
    int  F = (C * 9/5) + 32;
    printf("Hence, the temperature in Farenheit is : %d",F);
    return 0;
}