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
	char *token = NULL;
	char **arg_str = NULL;
	int idx, count = 0, len = 0;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] == ' ')
		{
			count++;
		}
	}
	count += 2;

	arg_str = malloc(sizeof(char *) * count);
	if (arg_str == NULL)
	{
		return (NULL);
	}
	token = strtok(string, " ");

	for (idx = 0; token != NULL; idx++)
	{
		len = _strlen(token);
		arg_str[idx] = malloc(sizeof(char) * (len + 1));
		if (arg_str[idx] == NULL)
		{
			return (NULL);
		}
		arg_str[idx] = token;
		token = strtok(NULL, " ");
	}
	arg_str[idx] = NULL;
	return (arg_str);
}


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

/**
 * _strcpy - Copies a string to a pointer.
