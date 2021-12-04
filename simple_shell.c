#include "shell.h"

/**
 * main -
 * args: staring arguments.
 * argv: array arguments.
 * env: variable of array environment.
 * Return:
 */

int main (int argc, char **argv, char **env)
{
	/**
	 * buffer = guarda el input.
	 * buffersize = size original de la variable.
	 * args = argumentos que el user pasa.
	 * isatty = checks if the FD is in the terminal
	 **/
	char *buffer;
	char **args;
	size_t buffsize;
	ssize_t input;
	int isattycheck, idx;
	(void)argc;

	isattycheck = isatty(FD);

	if (isattycheck != '\0')
		write(1, "($) ", 4);

	while ((input = getline(&buffer, &buffsize, stdin)))
	{
		if (input == EOF)
		{
			free(buffer); /*llamando el return de otra funcion*/
			exit(0); /*exit with succes*/
		}
		++idx; /* it goes from one token to the next*/

		args = _strtok(buffer);/* strtok = tokenize user input*/
		_fork(args, argv, env, buffer, idx);/*revisit*/

		buffsize = 0;

		if (isatty(FD))
			write (FD, "($) ", 4);
		buffer = NULL;/*revisit*/
	}
	if (input == -1)
	{
		return(EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
}
