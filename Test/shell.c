#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()

{
	/*pid_t parent_pid;
	pid_t child_pid;*/

	char *argv[] = {"/bin/ls", "/home/vagrant/simple_shell/Test/",NULL};

	if (execve(argv[0], argv, NULL)== -1)
	{
		perror("Huh?:");
	}
	printf("Aight, GG\n");
	return(0);
}