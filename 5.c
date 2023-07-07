#include <stdio.h>

int main() {
    int n;

    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    int count[n+1];

    // Base values
    count[0] = 1;
    count[1] = 2;
    count[2] = 4;

    // Compute the count of sequences
    for (int i = 3; i <= n; i++) {
        count[i] = count[i-1] + count[i-2] + count[i-3];
    }

    int result = count[n] % 12345;

    printf("Number of desired sequences: %d\n", result);

    return 0;
}