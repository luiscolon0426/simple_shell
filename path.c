#include "shell.h"

/**
 * path_to_arr - saves path in a 2d array
 * @env: the enviorement.
 * Return: the PATH in a 2d arr.
 */
char **path(char **environ)
{
	int i, count = 2, len;
	char *pathstr = NULL, *token = NULL;
	char **path = NULL;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strcmp(environ[i], "PATH") == 0)
			break;
	}
	pathstr = environ[i];

	for (i = 0; pathstr[i] != '\0'; i++)
	{
		if (pathstr[i] == ':')
			count++;
	}
	path = malloc(sizeof(char *) * count);
	if (path == NULL)
	{
		return (NULL);
	}
	token = *_str_tok(pathstr, "=");
	count--;
	for (i = 0; i < count; i++)
	{
		token = *_str_tok(NULL, ":");
		len = str_len(token);
		path[i] = malloc(sizeof(char) * (len + 1));
		if (path[i] == NULL)
		{
			return (NULL);
		}
		path[i] = token;
	}
	path[i] = NULL;
	return (path);
}
