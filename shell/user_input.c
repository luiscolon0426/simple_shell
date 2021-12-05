#include "shell.h"
/**
 * userinput - passes user input to main.
 * Return: user input without the new line.
 */

char *userinput(void)
{
	size_t size = 0;
	char *sentence = NULL;
	int len = 0;

	len = getline(&sentence, &size, stdin);
	sentence[len - 1] = '\0';
	return (sentence);
}
