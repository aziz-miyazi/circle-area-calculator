#include <stdio.h>

float circleArea(float radius) {
    return 3.1416 * radius * radius;
}

int main() {
    float radius;

    print("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", circleArea(radius));

    return 0;
}