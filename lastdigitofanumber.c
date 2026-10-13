#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Last digit = %d", n % 10);

    return 0;
}