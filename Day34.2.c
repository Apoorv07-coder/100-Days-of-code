//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

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

    int pos;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 1;
    }

    for(int i=pos;i<n-1;i++){
        a[i]=a[i+1]; 
    }

    printf("Array after deletion: ");
    for(int j=0;j<n-1;j++){
        printf("%d ", a[j]);
    }
    return 0;
}