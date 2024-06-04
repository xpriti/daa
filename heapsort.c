#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
	int i;
    for ( i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for ( i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        arr[i] = rand() % 100;  
        printf("%d ", arr[i]);
    }
    printf("\n");

    clock_t start = clock(); 

    heapSort(arr, n);

    clock_t end = clock(); 
    printf("Sorted array: ");
    for ( i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("CPU Time used: %f seconds\n", cpu_time_used);

    return 0;
}

