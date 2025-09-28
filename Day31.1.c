//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

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

    int key;
    printf("Enter the element to search: ");
    scanf("%d",&key);

    int index=-1;

    for(int i=0;i<n;i++){
        if(a[i]==key){
            index=i;
            break;
        }
    }
    
    printf("%d", index);
    return 0;
}