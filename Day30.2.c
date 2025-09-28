//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   

    int pc=0, nc=0, zc=0;

    for(int i=0;i<n;i++){
        if(a[i]>0){
            pc++;
        }
        else if(a[i]<0){
            nc++;
        }
        else{
            zc++;
        }
    }
    
    printf("Positive=%d, Negative=%d, Zero=%d", pc, nc, zc);
    return 0;
}