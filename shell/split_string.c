#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *split_string - Converts any string to 2D array.
 * @string: contain the user input.
 * Return: The 2D array.
 *
 */
char **split_string(char *string)
{
	char *token = NULL;
	char **token_array = NULL;
	int idx, count = 0, lenght = 0;

	for (idx = 0; string[idx] != '\0'; idx++)
	{
		if (string[idx] == ' ')
		{
			count++;
		}
	}
	count += 2;

	token_array = malloc(sizeof(char *) * count);
	if (token_array == NULL)
	{
		return (NULL);
	}
	token = strtok(string, " ");

	for (idx = 0; token != NULL; idx++)
	{
		lenght = _strlen(token);
		token_array[idx] = malloc(sizeof(char) * (lenght + 1));
		if (token_array[idx] == NULL)
		{
			return (NULL);
		}
		token_array[idx] = token;
		token = strtok(NULL, " ");
	}
	token_array[idx] = NULL;
	return (token_array);
}
