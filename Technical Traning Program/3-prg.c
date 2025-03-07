//

#include <stdio.h>

int powerof2(int n)
{
    return ((n > 0) && ((n - (n - 1)) == 0));
}
int main()
{
    int n;
    scanf("%d", &n);
    if (powerof2(n))
    {
        printf("It is power of 2");
    }
    else
        printf("It is not power of 2");
}