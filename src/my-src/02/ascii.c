#include <stdio.h>
#include <ctype.h>

int main(void) {
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 8; j++) {
            // * int -> unsigned char in printf
            const unsigned int code_point = i * 8 + j;
            printf("%02x ", code_point);
            if (!isprint(code_point))
                printf("NP \t");
            else printf("'%c' \t", code_point);
        }
        printf("\n");
    }
}
