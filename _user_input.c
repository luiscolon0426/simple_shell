#include "shell.h"

/**
 * _user_input - accepts the input, and returns tmp.
 * Return: tmp
 */
char *_user_input(void)
{
	size_t tmpsize = 0;
	char *tmp = NULL;
	int idx = 0;

	idx = getline(&tmp, &tmpsize, stdin);
	if (idx == EOF)
	{
		free(tmp);
		exit(EXIT_FAILURE);
	}
	tmp[idx - 1] = '\0';
	return (tmp);
}
