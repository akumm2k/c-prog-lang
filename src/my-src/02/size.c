#include <stdio.h>

int main(void) {
    printf("%zu\n", sizeof (1));
    printf("%zu\n", sizeof (char));
    printf("%zu\n", sizeof (long));
    printf("%zu\n", sizeof (long long));
    printf("%zu\n", sizeof ('A'));
    printf("%zu\n", sizeof (1LL));
}
