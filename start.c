#include "shell.h"

/**
 * _launch - launches the command
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
		if (execve(args[0], args, NULL) == -1)
			perror("ERROR");
		exit(EXIT_FAILURE);
	}

	else if (pid < 0)
		perror("launch");
	else
		wait(&status);

	return (1);
}

/**
 * _builtin_function - types command without /bin/
 * @args: argument
 * Return: 0
 **/
int _builtin_function(char **args)
{
	int idx = 0;
	pid_t pid;
	int status;

	pid = fork();

	builtin commands[] = {
		{"ls", "/bin/ls"},
		{"env", "/bin/env"},
		{"cat", "/bin/cat"},
		{NULL, NULL}
	};

	while (commands[idx].str1 != NULL)
	{
		if (_strcmp(commands[idx].str1, args[0]) == 0)
		{
			if (pid == 0)
			{
				if (execve(commands[idx].str2, args, NULL) == -1)
					perror("builtin");
				exit(EXIT_FAILURE);
			}
			else if (pid < 0)
				perror("launch");
			else
				wait(&status);
		}
		idx++;
	}
	if (commands[idx].str1 != NULL)
		return (_launch(args));
	return (0);
}
