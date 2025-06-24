#include <stdio.h>
#include <math.h>  // for sin, cos, pow, sqrt
#include <stdlib.h> // for exit

int main() {
    int choice;
    double num, base, exponent, result;

    do {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Sine\n");
        printf("2. Power (base^exponent)\n");
        printf("3. Cosine\n");
        printf("4. Square Root\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num);
                result = sin(num * M_PI / 180);  // Convert degrees to radians
                printf("sin(%.2lf) = %.4lf\n", num, result);
                break;

            case 2:
                printf("Enter base: ");
                scanf("%lf", &base);
                printf("Enter exponent: ");
                scanf("%lf", &exponent);
                result = pow(base, exponent);
                printf("%.2lf^%.2lf = %.4lf\n", base, exponent, result);
                break;

            case 3:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num);
                result = cos(num * M_PI / 180);  // Convert degrees to radians
                printf("cos(%.2lf) = %.4lf\n", num, result);
                break;

            case 4:
                printf("Enter number: ");
                scanf("%lf", &num);
                if (num < 0)
                    printf("Square root of negative number is not real.\n");
                else {
                    result = sqrt(num);
                    printf("sqrt(%.2lf) = %.4lf\n", num, result);
                }
                break;

            case 5:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);  // infinite loop until exit

    return 0;
}
