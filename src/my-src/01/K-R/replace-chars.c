#include <stdio.h>

#define BKSPACE 8
#define TAB 9

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == BKSPACE) putchar('\b');
		else if (c == TAB) putchar('\t');
		else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	
	}
	return 0;
}
