#include<stdio.h>
int main()
{
    float principal, rate, time, simple_interest, compound_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period: ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (1 + rate / 100) * time - principal;
    printf("Simple Interest: %f\n", simple_interest);
    printf("Compound Interest: %f\n", compound_interest);
    return 0;
}