// write a program in c to find the largest prime factor of a given number??

#include <stdio.h>

int largestprimefac(int num)
{
    int i = 2;
    int lar = 1;
    while (num % i == 0)
    {
        lar = i;
        num /= i;
    }
    for (i = 3; i * i < num; i += 2)
    {
        while (num % i == 0)
        {
            num /= i;
            lar = i;
        }
    }
    if (num > 2)
        lar = num;
    return (lar);
}

int main()
{
    int num;
    int i = 1;
    int lar = 1;
    scanf("%d", &num);
    printf("%d", largestprimefac(num));
}
