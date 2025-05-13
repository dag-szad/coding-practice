#include <cs50.h>
#include <stdio.h>

int main(void) {
    int height;

    do {
        height = get_int("Height: ");
    } while (height <= 0);

    for (int i = 1; i <= height; i++) {
        for (int j = height - i; j > 0; j--) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("#");
        }

        printf("\n");
    }
}
