#include <stdio.h>

int main() {
    float num1 = 0, num2 = 0;
    char oper;
    char choice;

    printf("Basic Calculator!\n");

    do {
        
        printf("\nEnter 1st number: ");
        scanf("%f", &num1);

        printf("Enter 2nd number: ");
        scanf("%f", &num2);
        
        getchar();

        printf("Enter operation (+ for Addition, - for Subtraction, * for Multiplication, / for Division): ");
        scanf("%c", &oper);

        switch (oper) {
            case '+':
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            default:
                printf("Invalid operator. Please use +, -, *, or /.\n");
        }

        
        getchar(); 
        printf("\ndo you want to perform another calculation? (y/n): ");
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Calculator exited.\n");
    return 0;
}
