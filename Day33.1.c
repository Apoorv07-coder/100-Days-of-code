//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the elements of the sorted array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   

    int key;
    printf("Enter the element to search: ");
    scanf("%d",&key);

    int left=0, right=n-1, index=-1;

    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==key){
            index=mid;
            break;
        }
        else if(a[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    
    printf("%d", index);
    return 0;
}