#include <stdio.h>

void insertElement(int *arr, int *size, int newValue, int position) {
    if (position >= 0 && position <= *size) {
        for (int i = *size; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = newValue;
        (*size)++;
    } else {
        printf("Vi tri khong hop le\n");
    }
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int newValue = 10;
    int position = 2;
    printf("Mang truoc khi sap xep:\n");
    printArray(array, size);
    insertElement(array, &size, newValue, position);
    printf("Mang sau khi sap xep:\n");
    printArray(array, size);

    return 0;
}

