//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d",&n);
    
    int a[n+1]; 
    printf("Enter the elements of the sorted array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   

    int key;
    printf("Enter the element to insert: ");
    scanf("%d",&key);

    int i;
    for(i=n-1;i>=0 && a[i]>key;i--){
        a[i+1]=a[i]; 
    }
    a[i+1]=key; 

    printf("Array after insertion: ");
    for(int j=0;j<=n;j++){
        printf("%d ", a[j]);
    }
    return 0;
}