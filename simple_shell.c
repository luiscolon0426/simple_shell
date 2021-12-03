#include "shell.h"

/**
 * main -
 * args: staring arguments.
 * argv: array arguments.
 * env: variable of array environment.
 * Return:
 */

int main (int argc, char **argv, char **env)
{
	char *buffer;
	char **args;
	size_t bufsize;
	ssize_t input;
	int check, idx;
	(void)argc;

