#include <stdio.h>

float circlearea(float radius) {
    return 3.1416 * radius * radius;
}

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", circleArea(radius));

    return 0;
}