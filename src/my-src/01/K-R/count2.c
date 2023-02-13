#include <stdio.h>

int main(void) {
	int c;
	int saw_blank = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			saw_blank = 1;
			continue;
		} else {
			if (saw_blank == 1) putchar(' ');
			saw_blank = 0;
			putchar(c);
		}
	}

	return 0;
}

