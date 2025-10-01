#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print underscores for blanks
        for (int j = 1; j <= (rows - i); j++) {
            printf("_ ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
