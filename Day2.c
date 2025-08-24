#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter the length: ");
    scanf("%d",&length);
    printf("Enter the breadth: ");
    scanf("%d",&breadth);
    printf("Area is : %d\n",length*breadth);
    printf("Perimeter is : %d",2*(length+breadth));
    return 0;
}