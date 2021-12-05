#include "shell.h"

/**
 * _executable - checks errors before starting the comm
 * @str_com: string with commands
 * Return: 1 if its succesful
 */
int _executable(char **str_com)
{
	struct stat st;

	if (str_com[0] == NULL)
		return (1);

	/*env*/
	else if (strcmp(str_com[0], "getenv") == 0)
	{
		/*getenv*/
		environment();
		return(1);
	}


	else if (strcmp(str_com[0], "exit") == 0)
		exit(EXIT_SUCCESS);

	/*if command doesnt work*/
	else if (stat(*str_com, &st) == -1)
	{
		perror("Error:");
		return (1);
	}
	return (_launch(str_com));
}
