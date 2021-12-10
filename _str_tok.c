#include "shell.h"

/**
 * _str_tok - tokenizes the strings(splits).
 * @string: string to be tokenized
 *
 * Return: string.
 */
char **_str_tok(char *string)
{
	/**
	 * tokens - double pointer array.
	 * token - pointer that falls inside the pointers
	 * of the double pointer array
	 **/
	int tmpsize = 50, position = 0;
	char *token;
	char **tokens;

	/*mallocs the empty "tokens" so it can store "token"*/
	tokens = malloc(tmpsize * sizeof(char *));
	if (tokens == NULL)
	{
		perror("Error\n");
		free(tokens);
		exit(EXIT_FAILURE);
	}
	token = strtok(string, " ");
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		token = strtok(NULL, " ");
	}
	tokens[position] = NULL;
	return (tokens);
}
