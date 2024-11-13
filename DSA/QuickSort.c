#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b)
 {
    int temp = *a;
    *a = *b;
    *b = temp;
 }

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {4, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("value of %d \n",n);
    quickSort(arr, 0, n - 1);
    printf("print the sorted array");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}