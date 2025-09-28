//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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

    for(int i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    
    printf("Reversed array: ");
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}