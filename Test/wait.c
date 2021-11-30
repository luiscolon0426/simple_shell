#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
	/*variables*/
	pid_t child_pid;
	int status;

	/*creating fork (child)*/
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	/**
	 * this function will automatically execute,
	 * and after 4 seconds, the else statement
	 * will execute
	 **/
	if (child_pid == 0)
	{
		printf("Wait for me, wait for me\n");
		sleep(4);
	}
	else
	{
		wait(&status);
		printf("Oh, it's all better now\n");
	}
	return (0);
}
