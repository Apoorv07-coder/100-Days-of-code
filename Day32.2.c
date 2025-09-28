//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    
    int count[10]={0};

    while(n>0){
        int digit=n%10;
        count[digit]++;
        n=n/10;
    }

    int max_count=0, digit_with_max_count=0;

    for(int i=0;i<10;i++){
        if(count[i]>max_count){
            max_count=count[i];
            digit_with_max_count=i;
        }
    }
    
    printf("Digit that occurs the most times: %d", digit_with_max_count);
    return 0;
}