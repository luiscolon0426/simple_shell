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
/**
 * _strcmp - compares two string.
 * @str1: first string to compare.
 * @str2: second string to compare.
 * @n: the number of bytes it will compare.
 */

int _strcmp(char *str1, char *str2)
{
	int idx;
	char space = (' ');

	for (idx = 0; str1[idx] != '\0' && str2[idx] != '\0'; idx++)
	{
		while (str1[idx] == space)
		{
			idx++;
		}
		if (str1[idx] != str2[idx])
			return (0);
	}
	return (1);
}
