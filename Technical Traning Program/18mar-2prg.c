// input one sting and find the first not repeating sting from starting eg: aabbcd -> c is not reapeating 

#include <stdio.h>
#define MAX_CHAR 256  // Maximum number of possible characters (ASCII)

char firstNonRepeatingChar(char str[]) {
    int count[MAX_CHAR] = {0};  // Initialize count array to store frequency of characters

    // First pass: count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Second pass: find the first character with a count of 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  // Return null character if no non-repeating character is found
}

int main() {
    char str[100];
    
    // Read the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the first non-repeating character
    char result = firstNonRepeatingChar(str);

    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("There is no non-repeating character.\n");
    }

    return 0;
}
