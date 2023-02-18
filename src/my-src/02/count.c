#include <stdio.h>
#include <math.h>

int main(void) {
    int c;
    int occurs[10] = {};

    while ((c = getchar()) != EOF) {
        if ('0' <= c && c <= '9')
            occurs[c - '0']++;
    }

#ifndef LOG
    for (int i = 0; i < 10; i++)
        printf("%d: %d\n", i, occurs[i]);
#else
    for (int i = 0; i < 10; i++) {
        printf("%d: ", i);
        for (int j = 0; j < log2(occurs[i]); j++)
            printf("*");
        printf("\n");
    }
#endif
}
