//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
    int n,i,con=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            con=1;
            break;
        }
    }
    if(con==0){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
    
}