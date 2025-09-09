//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
int main(){
    int n, r, rev=0, comp=0, pl=1;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        if(r==0){
            comp=comp+1*pl;
        }
        n=n/10;
        pl=pl*10;
    }
    printf("The 1's complement is %d",comp);
    return 0;
}