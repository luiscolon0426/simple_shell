#include "shell.h"

/**
 * _launch - starts the command
 * @args: string with commands
 * Return: 1 success
 */
int _launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
			perror("launch");
		exit(EXIT_FAILURE);
	}

	else if (pid < 0)
		perror("launch");
	else
		wait(&status);

	return (1);
}
