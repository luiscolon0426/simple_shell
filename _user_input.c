#include "shell.h"

/**
 * _user_input - accepts the input, and returns buffer.
 * Return: tmp
 */

char *_user_input(void)
{
	size_t tmpsize = 0;
	int dest = 0;
	char *comm, *tmp = NULL;
	int idx;


	idx = getline(&tmp, &tmpsize, stdin);
	if (idx < 0)
	{
		free(tmp);
		exit(EXIT_FAILURE);
	}

	/*search for the tmp and use malloc*/
	comm = malloc(sizeof(char) * str_len(tmp));
	if (comm == NULL)
	{
		free(comm);
		exit(EXIT_FAILURE);
	}
	_strcpy(comm, tmp);
	return (comm);
}
