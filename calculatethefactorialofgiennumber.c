#include<stdio.h>
int main() 
{
    int i,fact=1;
    printf("Enter a number:");
    scanf("%d",&i);
    while(i > 0) 
    {
        fact = fact * i;
        i--;
    }
    printf("Factorial is: %d", fact);
    return 0;
}