// Create a program to manage bank accounts using a struct in C. Each bank account should have:

// Account number

// Account holder name

// Balance

// Also, have a common interest rate for all accounts.

// You must:

// Initialize values using default and custom methods

// Copy one account into another

// Update the common interest rate using a function

// Display account details

// Show how all of this works in main()

#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNumber;
    char accountHolder[50];
    float balance;
};

float interestRate = 0.0;

void initDefault(struct BankAccount *acc) {
    acc->accountNumber = 0;
    strcpy(acc->accountHolder, "No Name");
    acc->balance = 0.0;
}

void initAccount(struct BankAccount *acc, int number, const char name[], float bal) {
    acc->accountNumber = number;
    strcpy(acc->accountHolder, name);
    acc->balance = bal;
}

void copyAccount(struct BankAccount *dest, struct BankAccount *src) {
    dest->accountNumber = src->accountNumber;
    strcpy(dest->accountHolder, src->accountHolder);
    dest->balance = src->balance;
}

void updateInterestRate(float rate) {
    interestRate = rate;
}

void display(struct BankAccount acc) {
    printf("Account Number : %d\n", acc.accountNumber);
    printf("Account Holder : %s\n", acc.accountHolder);
    printf("Balance        : %.2f\n", acc.balance);
    printf("Interest Rate  : %.2f%%\n", interestRate);
    printf("--------------------------\n");
}

int main() {
   
    struct BankAccount acc1;
    initDefault(&acc1);

    struct BankAccount acc2;
    initAccount(&acc2, 101, "Ravi Kumar", 5000.50);

    struct BankAccount acc3;
    copyAccount(&acc3, &acc2);

    updateInterestRate(4.5);

    printf("Account 1 (Default Initialized):\n");
    display(acc1);

    printf("Account 2 (Parameterized):\n");
    display(acc2);

    printf("Account 3 (Copied from Account 2):\n");
    display(acc3);

    return 0;
}

// Output:
// Account 1 (Default Initialized):
// Account Number : 0
// Account Holder : No Name
// Balance        : 0.00
// Interest Rate  : 4.50%

// Account 2 (Parameterized):
// Account Number : 101
// Account Holder : Ravi Kumar
// Balance        : 5000.50
// Interest Rate  : 4.50%

// Account 3 (Copied from Account 2):
// Account Number : 101
// Account Holder : Ravi Kumar
// Balance        : 5000.50
// Interest Rate  : 4.50%
