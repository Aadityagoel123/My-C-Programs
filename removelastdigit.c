#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    n = n / 10;

    printf("Result = %d", n);

    return 0;
}