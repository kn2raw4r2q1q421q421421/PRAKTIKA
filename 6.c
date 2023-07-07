#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;

    printf("Enter the coordinates of points (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Compute the length of the vector using the Euclidean distance formula
    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Length of the vector: %.6f\n", length);

    return 0;
}