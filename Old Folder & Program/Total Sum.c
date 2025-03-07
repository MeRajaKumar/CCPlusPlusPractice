//How to calculate the total sum of the multiplication table??
#include <stdio.h>
int main()
{
    int no, i, mult, sum;

    printf("Enter the number you wish to multiply: \n");
    scanf("%d", &no);

    printf("Enter how many times you want to multiply the number: \n");
    scanf("%d", &mult);

    printf("Multiplication is as follows: \n");

    for( i = 1; i <= mult; i++ )
    {
        printf("%d X %d = %d\n", no, i, i * no);
    }
}