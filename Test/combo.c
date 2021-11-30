#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main ()
{
	pid_t p_process_id;
	pid_t child_pid;

	char *argv[] = {"/bin/ls", "-l","/tmp", NULL};
	int status;
	int i;

	for(i = 1; i < 6; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			printf("(%u) I am Father\n", p_process_id);
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			else
				printf("after execve\n");
		}
		else
		{
			wait(&status);
			printf("(%u) I am Child\n", child_pid);
		}
	}
	return (0);
}
