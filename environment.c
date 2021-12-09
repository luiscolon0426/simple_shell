#include "shell.h"

/**
 * environment - Prints for the enviornment
 * in the shell
 * Return: 0
 **/

int environment(void)
{
	int count = 0;

	while (environ[count] != NULL)
	{
		/*Added newline in write style*/
		write(STDOUT_FILENO, environ[count], str_len(environ[count]));
		write(STDOUT_FILENO, "\n", 1);
		count++;
	}

	return (0);
}
