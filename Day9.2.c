//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main(){
    int per;
    printf("Enter your percentage :");
    scanf("%d",&per);
    if(per>=90){
        printf("Grade A");
    }
    else if(per>80 && per<90){
        printf("Grade B");
    }
    else if(per>70 && per<80){
        printf("Grade C");
    }
    else if(per>60 && per<70){
        printf("Grade D");
    }
    else if(per>50 && per<60){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
}