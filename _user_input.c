#include "shell.h"

/**
 * _user_input - accepts the input, and returns buffer.
 * Return: tmp
 */

char *_user_input(void)
{
	size_t tmpsize = 0;
	/*char *comm, *tmp = NULL;*/
	char *tmp = NULL;
	int idx = 0;


	idx = getline(&tmp, &tmpsize, stdin);
	if (idx == EOF)
	{
		free(tmp);
		exit(EXIT_FAILURE);
	}

	/*search for the tmp and use malloc*/
	/*comm = malloc(sizeof(char) * str_len(tmp));
	if (comm == NULL)
	{
		free(comm);
		exit(EXIT_FAILURE);
	}
	_strcpy(comm, tmp);
	free(tmp);*/
	tmp[idx - 1] = '\0';
	return (tmp);

}
