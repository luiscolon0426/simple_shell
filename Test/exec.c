#include <stdio.h>
#include <unistd.h>

int main()
{
	/*array que contiene los comandos para ejectar "ls"*/
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("before execve\n");
	
	/**
	 * si argv[0](/bin/ls), el array completo,
	 * y NULL es igual a -1
	 **/
	if (execve(argv[0], argv, NULL)== -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return(0);
}
