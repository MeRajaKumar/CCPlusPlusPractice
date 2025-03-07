// reversing string without using extra memory??

#include <stdio.h>
#include <string.h>
int reversestring(char *arr)
{
    int left = 0;
    int right = strlen(arr) - 1;
    while (left < right)
    {
        char temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
int main()
{
    char arr[] = "Hello";
    reversestring(arr);
    printf("%s", arr);
    return (0);
}
