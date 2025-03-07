// check even or odd using bitwise && (without using modulas operator)??

#include <stdio.h>

int evenodd(int n)
{
    if ((n & 1) == 0)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", evenodd(n));
}