#include <stdio.h>

int main() {
    int a,b;
    printf("Enter values of a and b:");
    scanf("%d %d",&a,&b);
    // Swap without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: %d %d\n",a,b);
    return 0;
}