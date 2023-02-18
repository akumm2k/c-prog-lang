#include <stdio.h>
#include <stdbool.h>
#define F_TO_C(f) (((f) - 32) * 5.0 / 9)

int main(void) {
    printf("f\tc\n");
    for (int f = -60; f < 100; f += 20) {
        const float c = F_TO_C(f);
        printf("%d\t%.2f\n", f, c);
    }
    bool x = true;
    printf("%d\n", x);
    printf("\101\n"); // octal escape seq: character at 0101

    return 0;
}
