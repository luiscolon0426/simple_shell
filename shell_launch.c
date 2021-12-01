#include "shell.h"

int simple_shell_launch(char **args)
{
	pid_t pid, wpid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		/*child process*/
		if (execvp(args[0], args) == -1)
		{
			perror("Error:");
		}
		exit(EXIT_FAILURE);

		else if (pid < 0)
		{
			/*Error forking*/
			perror("Error:");
		}
		else
		{
			/*Parent process*/
			do {
				wpid = waitpid(pid, &status, WUNTRACED);
			} while (WIFEXITED(status) != NULL && WIFSIGNALED(status) != NULL)
		}
	}
	return (1);
}
