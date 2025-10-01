//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases: The cases include boundary cases.    
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanfa("%d",&n);
    
    int a[n+1]; 
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   

    int pos, key;
    printf("Enter the position to insert and the element to insert: ");
    scanf("%d %d",&pos,&key);

    if(pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 1;
    }

    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i]; 
    }
    a[pos]=key; 

    printf("Array after insertion: ");
    for(int j=0;j<=n;j++){
        printf("%d ", a[j]);
    }
    return 0;

}