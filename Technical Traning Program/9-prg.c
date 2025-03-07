// 10 input one array with zero as input segregate the array element where all zero's element shifted to end of array eg - arr = [4,2,1,3,0,5,0,3] new arr = [1,2,3,3,4,5,0,0]??

#include <stdio.h>

// Function to segregate zeros to the end while sorting non-zero elements
void segregateAndSort(int arr[], int n)
{
    int temp[n], j = 0;

    // Copy non-zero elements to temp array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[j++] = arr[i];
        }
    }

    // Sort non-zero elements
    for (int i = 0; i < j - 1; i++)
    {
        for (int k = i + 1; k < j; k++)
        {
            if (temp[i] > temp[k])
            {
                int t = temp[i];
                temp[i] = temp[k];
                temp[k] = t;
            }
        }
    }

    // Copy sorted non-zero elements back to original array
    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }

    // Fill the rest with zeros
    for (int i = j; i < n; i++)
    {
        arr[i] = 0;
    }
}

// Function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {4, 2, 1, 3, 0, 5, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    segregateAndSort(arr, n);
    printf("Sorted and segregated array: \n");
    printArray(arr, n);
    return 0;
}