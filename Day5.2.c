//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
    int h,m,time,second,totalSeconds;
    printf("Enter Time in seconds:");
    scanf("%d",&time);
    h=time/3600;
    m=(time%3600)*60;
    second = time % 60;
    printf("Time in H:M:S format: %d:%d:%d\n", h,m,second);
    return 0;
}