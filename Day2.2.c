#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    printf("Area of circle: %.2f",3.14*radius*radius);
    printf("Perimeter of circle: %.2f",2*3.14*radius);
    return 0;
}