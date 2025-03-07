#include <stdio.h>

int main() {
    // Declare variables to store user input and the result
    float num1, num2, result;
    char operator;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume the newline character

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculations based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;  // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;  // Exit with an error code
    }

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;  // Exit successfully
}
