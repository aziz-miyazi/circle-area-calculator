#include <stdio.h>

float Area(float radius) {
    return 3.1416 * radius * radius;
}
//Hello added a comment here.
int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", circleArea(radius));

    return 0;
}