// reverse without using string or, write a program in c to reverse a number using recursion without converting it into string??

#include <stdio.h>
int reverse(int num, int rev)
{
    if (num == 0)
        return rev;
    else
    {
        reverse(num / 10, rev * 10 + num % 10);
    }
}
int main()
{
    int num = 2345;
    int rev = 0;
    printf("Reversed number:%d", reverse(num, 0));
}
