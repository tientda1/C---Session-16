#include <stdio.h>

void sum(int a, int b, int *result) {
    *result = a + b;
}
int main() {
    int num1 = 7;
    int num2 = 5;
    int result;
    sum(num1, num2, &result);
    printf("Sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

