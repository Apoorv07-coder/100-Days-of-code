//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main(){
    int n,ogNo,rem,result=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    ogNo=n;
    while(ogNo!=0){
        rem=ogNo%10;
        result+=rem*rem*rem;
        ogNo/=10;
    }
    if(result==n){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
    
}