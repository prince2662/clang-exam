#include <stdio.h>
void swapInts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two integers (x y): ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swap: x = %d, y = %d\n", x, y);

    swapInts(&x, &y); 

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
