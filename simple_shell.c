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
	 * tmp = guarda el input.
	 * tmpsize = size original de la variable.
	 * args = argumentos que el user pasa.
	 * isatty = checks if the FD is in the terminal
	 **/
	char *tmp;
	char **args;
	size_t tmpsize;
	ssize_t input;
	int isattycheck, idx;
	(void)argc;

	isattycheck = isatty(FD);

	if (isattycheck != '\0')
		write(1, "($) ", 4);

	while ((input = getline(&tmp, &tmpsize, stdin)))
	{
		if (input == EOF)
		{
			free(tmp); /*llamando el return de otra funcion*/
			exit(0); /*exit with succes*/
		}
		++idx; /* it goes from one token to the next*/

		args = _strtok(tmp);/* strtok = tokenize user input*/
		_fork(args, argv, env, tmp, idx);/*revisit*/

		tmpsize = 0;

		if (isatty(FD))
			write (FD, "($) ", 4);
		tmp = NULL;/*revisit*/
	}
	if (input == -1)
	{
		return(EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
}
