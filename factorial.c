#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer (0 to 20): ");
    scanf("%d", &num);

    if (num < 0 || num > 20) {
        printf("Please enter a number from 0 to 20.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }

        printf("Factorial = %llu\n", fact);
    }

    return 0;
}