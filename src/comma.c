#include <stdio.h>

int
main(void)
{
	int x, i = 4;  // not comma operator !

	while (x = 10, printf("foo\n"), i < 6) {
		i++;
	}

	return (++i, i);	// the parens are there just for style
				// what if you change ++i to i++ ?
}
