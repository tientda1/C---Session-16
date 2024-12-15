#include <stdio.h>

void updateElement(int *arr, int newValue, int position, int size) {
    if (position >= 0 && position < size) {
        arr[position] = newValue;
    } else {
        printf("Sai vi tri\n");
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int newValue = 10;
    int position = 2;

    printf("Mang truoc khi update:\n");
    printArray(array, size);
    updateElement(array, newValue, position, size);
    printf("Mang sau khi update:\n");
    printArray(array, size);

    return 0;
}

