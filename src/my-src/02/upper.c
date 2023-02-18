#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if ('a' <= c && c <= 'z')
            putchar(c - 32);
        else putchar(c);
    }

}
