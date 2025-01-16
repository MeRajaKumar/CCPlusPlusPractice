#include <iostream>
#include <vector>

using namespace std;

// Recursive function to perform quicksort
void quicksort(vector<int>& arr, int low, int high){
    if (low < high ){
        int pi = partition(arr, low, high); //partitioning index
        quicksort(arr, low, pi - 1);        //sort left partition
        quicksort(arr, pi + 1, high);       //sort right partition
    }
}

// Function to partition the array
int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high]; //last element as pivot
    int i = low - 1; // index for smaller element
    for ( int j = low; j<high; j++){
        if (arr[j]<= pivot){
            i++;
            swap(arr[i],arr[j]); //swap smaller element
        }
    }
    swap(arr[i + 1], arr[high]); //swap pivot into correct position
    return i + 1;
}

// Function to print the array
void printArray(const vector<int> & arr){
    for ( int num : arr)
        cout << num << " ";
    cout << end1;
}

int main(){
    vector<int> arr = {10,7,8,9,1,5};
    int n  = arr.size();

    cout << "Original array: ";
    printArray(arr);
    quicksort(arr, 0, n - 1);
}