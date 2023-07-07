#include <stdio.h>

// Function to count the number of numbers with r digits
long long countNumbers(int r) {
    // Initialize variables to store the counts of numbers
    long long same = 0; // Count of numbers with the last two digits the same
    long long different = 0; // Count of numbers with the last two digits different

    // Initialize initial values for the digits
    same = 2; // Two numbers: 55 and 99
    different = 2; // Two numbers: 59 and 95

    // Calculate the number of numbers for the remaining digits
    for (int i = 3; i <= r; i++) {
        // Calculate the new count of numbers for the state where the last two digits are the same
        long long newSame = same + different;

        // Calculate the new count of numbers for the state where the last two digits are different
        long long newDifferent = same;

        // Update the values for the next iteration
        same = newSame;
        different = newDifferent;
    }

    // Return the total count of numbers
    return same + different;
}

int main() {
    int r;
    printf("Enter the number of digits (r): ");
    scanf("%d", &r);

    long long result = countNumbers(r);

    printf("Number of numbers with %d digits: %lld\n", r, result);

    return 0;
}