#include <stdio.h>
#include <string.h>

float area_cir(float radius) {
    return 3.14 * (radius * radius);
}

float area_rect(float length, float width){
    return length * width;
}

float area_tri(float length, float width){
    return 0.5 * (length * width);
}

int main() {
    int shape;
    printf("Enter shape for (circle : 1 / rectangle : 2 / triangle : 3): ");
    scanf("%d", &shape);

    // Use switch-case on the mapped value
    switch (shape) {
        case 1:
            printf("Area of circle = %.2f\n", area_cir(24));
            break;
        case 2:
            printf("Area of rectangle = %.2f\n", area_rect(12, 34));
            break;
        case 3:
            printf("Area of triangle = %.2f\n", area_tri(2, 5));
            break;
        default:
            printf("Invalid shape entered.\n");
    }

    return 0;
}
