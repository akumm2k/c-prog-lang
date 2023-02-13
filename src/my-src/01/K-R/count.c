#include <stdio.h>

int main(void) {
	int c, blanks = 0, tabs = 0, nls = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') blanks++;
		else if (c == '\t') tabs++;
		else if (c == '\n') nls++;
	}
	
	printf("b: %d\nt: %d\nn: %d\n", blanks, tabs, nls);
}
