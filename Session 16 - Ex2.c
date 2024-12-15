#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 15;
    printf("Truoc khi doi gia tri:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    swap(&x, &y);
    printf("Sau khi doi gia tri:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

