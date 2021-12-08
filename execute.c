#include "shell.h"

/**
 * _executable - checks for errors before launching the command
 * @str_com: string with commands
 * Return: 1 if launch was success
 */
int _executable(char **str_com, char *str)
{
	if (str_com[0] == NULL)
		return (1);

	else if (strcmp(str_com[0], "env") == 0)
	{
		environment();
		return (1);
	}

	else if (strcmp(str_com[0], "exit") == 0)
	{
		free_grid(str_com);
		free(str);
		exit(EXIT_SUCCESS);
	}
	return (_launch(str_com));
}
