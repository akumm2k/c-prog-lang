#include <stdio.h>

int main(void) {
    printf("f\tc\n");
    float c;
    for (int f = -40; f < 100; f += 20) {
        c = 9 / 5 * (f - 32);
        printf("%d\t%f\n", f, c);
    }
}
