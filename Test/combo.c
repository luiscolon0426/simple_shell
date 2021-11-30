#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


int main ()
{
	pid_t p_process_id;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l","/tmp", NULL};

	int i;
	for(i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			perror("Error:");
			return (1);
		}

	}
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}

	printf("after execve\n");

}
