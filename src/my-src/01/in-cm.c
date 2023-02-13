#include <stdio.h>
#define IN_CM 2.54


int main(void) {
    printf("in\tcm\n");
    int cm;
    for (int i = 1; i < 10; i++) {
        cm = i * IN_CM;
        // printf("%d\t%d\n", i, cm);
        printf("%d\t%.2f\n", i, i * IN_CM);
        // printf("%d\t%d\n", i, i * IN_CM); // ! get burnt
    }

}
