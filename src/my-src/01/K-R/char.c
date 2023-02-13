#include <stdio.h>

int main(void) {
	int c; // We must use an int as EOF = -1, and char can't repr -1
			// for a char, -1 == 255
	printf("%d\n", EOF);
#if 0
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
#endif
	c = (getchar() != EOF);
	printf("c=%d\n", c);
	return -1;
}

