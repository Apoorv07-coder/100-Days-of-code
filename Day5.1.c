#include <stdio.h>

int main() {
    float principal, rate, simpleInterest, compoundAmount = 0, compoundInterest;
    int time, i;
    printf("Enter Principal Amount : ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest : ");
    scanf("%f", &rate);
    printf("Enter Time : ");
    scanf("%d", &time);
    simpleInterest = (principal * rate * time) / 100.0;
    compoundAmount = principal;
    for (i = 1; i <= time; i++) {
        compoundAmount = compoundAmount * (1 + rate / 100.0);
    }
    compoundInterest = compoundAmount - principal; 
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}