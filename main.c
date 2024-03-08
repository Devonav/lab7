#include <stdio.h>
//implemeted by devon villalona
void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[arr[j+1]]++;
            }
        }
    }
}

void selectionSort(int arr[], int n, int swaps[]) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            swaps[arr[i]]++;
        }
    }
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n = sizeof(array1) / sizeof(array1[0]);
    int swaps1[100] = {0}; // assuming values won't exceed 100
    int swaps2[100] = {0}; // assuming values won't exceed 100
    
    printf("array1 bubble sort:\n");
    bubbleSort(array1, n, swaps1);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array1[i], swaps1[array1[i]]);
    }
    int total_swaps = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps += swaps1[i];
    }
    printf("total swaps: %d\n", total_swaps);
    
    printf("\narray2 bubble sort:\n");
    bubbleSort(array2, n, swaps2);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array2[i], swaps2[array2[i]]);
    }
    total_swaps = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps += swaps2[i];
    }
    printf("total swaps: %d\n", total_swaps);
    
    printf("\narray1 selection sort:\n");
    selectionSort(array1, n, swaps1);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array1[i], swaps1[array1[i]]);
    }
    total_swaps = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps += swaps1[i];
    }
    printf("total swaps: %d\n", total_swaps);
    
    printf("\narray2 selection sort:\n");
    selectionSort(array2, n, swaps2);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array2[i], swaps2[array2[i]]);
    }
    total_swaps = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps += swaps2[i];
    }
    printf("total swaps: %d\n", total_swaps);

    return 0;
}
