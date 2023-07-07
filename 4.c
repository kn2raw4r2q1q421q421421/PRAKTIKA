#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a natural number n: ");
    scanf("%d", &n);

    // Iterate through all possible divisor values
    for (int m = 1; m < n; m++) {
        int quotient = n / m;
        int remainder = n % m;

        // Compare the quotient and remainder with m
        if (quotient == remainder) {
            count++;
        }
    }

    printf("Number of equal divisors of %d: %d\n", n, count);

    return 0;
}