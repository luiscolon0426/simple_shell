#include "shell.h"
#define LSH_TOK_TMPSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

char **simple_shell_token(char *line)
{
	int tmpsize = LSH_TOK_TMPSIZE, position = 0;
	char **tokens = malloc(tmpsize * sizeof(char*));
	char *token;

	if (tokens != NULL)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, LSH_TOK_DELIM);

	while(token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= tmpsize)
		{
			tmpsize += LSH_TOK_TMPSIZE;
			tokens = _realloc(tokens, tmpsize * sizeof(char*));

			if(tokens != NULL)
			{
				perror("Error:");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, LSH_TOK_DELIM);
	}
	tokens[position] = NULL;
	return tokens;
}
