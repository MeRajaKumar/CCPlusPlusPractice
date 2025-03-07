// print sum of digits until it becomes single digit number??

#include <stdio.h>

int superdigit(int n)
{
    while (n > 9)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    {
        return (n);
    }
}
int main()
{
    int n, sum;
    printf("Enter the number: ");
    scanf("%d", n);
    printf("The sum is %d", superdigit(n));
}
