#include <stdio.h>

void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {45,15,23,26,12,52,64};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Mang truoc khi sap xep:\n");
    printArray(array, size);
    sortArray(array, size);
    printf("Mang sau khi sap xep:\n");
    printArray(array, size);

    return 0;
}

