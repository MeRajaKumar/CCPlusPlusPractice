#include <stdio.h>
#include <string.h>

// Area functions
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
    char input[20];
    int shape = 0;

    printf("Enter shape (circle / rectangle / triangle): ");
    scanf("%s", input);

    // Map input string to an integer
    if (strcmp(input, "circle") == 0) {
        shape = 1;
    } else if (strcmp(input, "rectangle") == 0) {
        shape = 2;
    } else if (strcmp(input, "triangle") == 0) {
        shape = 3;
    } else {
        shape = 0;
    }

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
