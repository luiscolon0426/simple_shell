#include "sh.h"

/**
 * main - displays looped prompt and waits for user input.
 * return: returns the executable argument in the command prompt line.
 */

int interactive()
{
	char *input;
	size_t inputsize = 50;
	size_t length;

	while (1)
	{
		input = malloc(sizeof(char) * inputsize);

		write(STDOUT_FILENO, "($) ", 4);
		length = getline(&input, &inputsize, stdin);
		input[length - 1] = '\0';


	}
}
