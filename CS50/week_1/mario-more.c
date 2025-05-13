#include <cs50.h>
#include <stdio.h>

void print_chars(char c, int count) {
    for (int i = 0; i < count; i++) {
        printf("%c", c);
    }
}

int main(void) {
    int height;

    do {
        height = get_int("Height: ");
    } while (height <= 0);

    for (int i = 1; i <= height; i++) {
        print_chars(' ', height - i);
        print_chars('#', i);
        printf("  ");
        print_chars('#', i);
        printf("\n");
    }
}
