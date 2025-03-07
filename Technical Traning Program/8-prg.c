// input one expression as string and compiler will tell weather it is balanced or not eg: {(a+b) → not balanced

#include <stdio.h>
#include <string.h>
#define MAX 100

// Function to check if the expression is balanced or not
int isBalanced(char *expr)
{
    char stack[MAX]; // stack to hold the parentheses
    int top = -1;    // initialized stack as empty

    // Traverse through the expression
    for (int i = 0; i < strlen(expr); i++)
    {
        char ch = expr[i];

        // If the character is '(', push it onto the stack
        if (ch == '(')
        {
            top++;
            stack[top] = ch;
        }

        // If the character is ')', check if it can be matched with a '('
        else if (ch == ')')
        {
            if (top == -1)
            {
                return 0; // Unmatched ')'
            }
            else
            {
                top--; // Pop '(' from the stack
            }
        }
    }

    // If the stack is empty, parentheses are balanced
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char expr[MAX];

    // Input the expression
    printf("Enter an expression: ");
    fgets(expr, MAX, stdin);

    // Remove newline character if present
    expr[strcspn(expr, "\n")] = '\0';

    // Check if the expression is balanced
    if (isBalanced(expr))
    {
        printf("The entered expression is balanced.\n");
    }
    else
    {
        printf("The entered expression is not balanced.\n");
    }
    return 0;
}



// checking if equation is balanced ( isme stack ka bhi use kar sakte ho )

#include <stdio.h>
#include <stdbool.h>

bool isBalanced(char *expr)
{
    int count = 0;
    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == '(')
            count++;
        else if (expr[i] == ')')
            count--;
        if (count < 0)
            return false;
    }
    return count == 0;
}
int main()
{
    char expr[] = "{(a+b)}";
    printf("Expression Balanced: %s\n", isBalanced(expr) ? "Yes" : "No");
    return 0;
}