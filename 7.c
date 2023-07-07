#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;

    printf("Enter the coordinates and radii of two circles (x1 y1 r1 x2 y2 r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Check conditions for intersection of circles
    if (distance > r1 + r2) {
        // Circles do not intersect
        printf("Number of intersection points: 0\n");
    } else if (distance < fabs(r1 - r2)) {
        // One circle is completely inside the other
        printf("Number of intersection points: 0\n");
    } else if (distance == 0 && r1 == r2) {
        // Circles coincide
        printf("Number of intersection points: -1\n");
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Circles touch externally or internally
        printf("Number of intersection points: 1\n");
    } else {
        // Circles intersect at two points
        printf("Number of intersection points: 2\n");
    }

    return 0;
}