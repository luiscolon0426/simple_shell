#include "shell.h"
/**
 * _executable - before token, checks for builtins.
 * @str: string with commands
 *
 * Return: 0
 */
int _executable(char *str)
{

	if (_strncmp(str, "env", 3) == 0)
	{
		environment();
		return (1);
	}

	if (strncmp(str, "exit", 4) == 0)
	{
		free(str);
		exit(EXIT_SUCCESS);
		return (0);
	}
	return (0);
}
