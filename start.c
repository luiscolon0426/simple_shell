#include "shell.h"

/**
 * _launch - launches the command
 * @args: string with commands
 * @string: user input
 * Return: 1 success
 */
void _launch(char **args, char *string)
{


	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			free(string);
			free_grid(args);
			perror("ERROR!");
			exit(EXIT_FAILURE);
			/*free_grid(args);*/
		}
		free(string);
		free_grid(args);
		/*free_grid(args);*/

	}
	else
		wait(&status);
}
