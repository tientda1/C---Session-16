#include <stdio.h>

int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int valueToFind = 10;
    int position = searchElement(array, size, valueToFind);
    if (position != -1) {
        printf("Phan tu %d o vi tri %d\n", valueToFind, position);
    } else {
        printf("Phan tu %d khong tim thay trong mang\n", valueToFind);
    }

    return 0;
}

