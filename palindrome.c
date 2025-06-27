#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Save original number

    while (num != 0) {
        remainder = num % 10;                 // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;                       // Remove last digit
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  

    while (num != 0) {
        remainder = num % 10;                 
        reversed = reversed * 10 + remainder; 
        num = num / 10;                       
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
