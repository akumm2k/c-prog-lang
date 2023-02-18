#include <stdio.h>
#define IN_TO_CM 2.54
#define CHUNK_SIZE 10
#define NUM_CHUNKS 3

int main(void) {
    printf("Ell\tInches\tCentimeters\n");
    for (int i = 0; i < NUM_CHUNKS; i++) {
        for (int k = 0; k < 4; k++) printf("-----");
        printf("\n");
        for (int j = 0; j < CHUNK_SIZE; j++) {
            const int ell = i * CHUNK_SIZE + j + 1;
            const int inc = ell * 45;
            const float cms = inc * IN_TO_CM;
            printf("%d\t%d\t%.2f\n", ell, inc, cms);
        }
    }
    return 0;
}
