#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n >= 10)
        n /= 10;

    printf("First digit = %d", n);

    return 0;
}