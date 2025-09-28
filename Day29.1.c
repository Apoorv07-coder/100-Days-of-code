//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>
int main(){
    
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements of the array: ");
    scanf("%d",&a[0]);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("The sum of the array elements is: %d", sum);
    return 0;
}
