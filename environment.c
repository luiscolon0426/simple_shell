#include "shell.h"

/**
 * environment - Checks for the enviornment
 * in the shell
 * Return: 0
 **/

int environment(void)
{
	int count = 0;

	while (environ[count] != NULL)
	{
		write(1, *environ, 46);
		count++;
	}

	return (0);
}
