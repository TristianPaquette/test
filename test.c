#include <stdio.h>

int double_value(int x) {
    return x * 2;
}

int main() {
    printf("Enter an integer: ");
    int num;
    scanf("%d", &num);
    int result = double_value(num);
    printf("Double of %d is %d\n", num, result);
    return 0;
}