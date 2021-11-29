#include <stdio.h>
#include <stdlib.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; argv[i] != NULL; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
