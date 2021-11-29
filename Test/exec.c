#include <stdio.h>
#include <unistd.h>

int main()
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("before execve\n");

	if (execve(argv[0], argv, NULL)== -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return(0);
}
