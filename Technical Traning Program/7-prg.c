// write a program to input one array and cyclically rotate the array to shift the position to the right

#include <stdio.h>

int cyclic(int arr[], int n)
{
    if (n < 2)
        return (n);
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cyclic(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d", arr[i]);
}
