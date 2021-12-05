#include "shell.h"

/**
 * _strlen - Finds the length of the string.
 * @str: String variable.
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strtok - Creates tokenized input.
 * @str: Input string.
 * Return: strings.
 */
char **_strtok(char *str)
{

