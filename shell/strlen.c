#include "shell.h"

/**
 * _strlen - finds lenght of the string
 * @string: the string
 * Return: lenght of the string.
 */
int _strlen(char *string)
{
	int len = 0;

	while (string[len] != '\0')
		len++;
	
	return (len);
}
