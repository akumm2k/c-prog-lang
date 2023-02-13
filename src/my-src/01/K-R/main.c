#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char* strs[] = {"hello\0ok", "world"};

	int *x = malloc(sizeof(int));
	*x = 42;

	int y;
	scanf("hi %d", &y);
	for (int i = 0; i < 2; i++) {
		printf("%s\n", strs[i]);
	}

	printf("outting %d and %d\n", *x, y);

	free(x);
	return 0;
}

