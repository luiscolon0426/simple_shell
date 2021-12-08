#include "shell.h"

/**
 * path - saves path.
 * @environ: the enviorement.
 * Return: the PATH.
 */
char **path(char **environ)
{
	int buffer, count = 2, len;
	char *pathstr = NULL, *token = NULL;
	char **path = NULL;

	for (buffer = 0; environ[buffer] != NULL; buffer++)
	{
		if (_strcmp(environ[buffer], "PATH") == 0)
			break;
	}
	pathstr = environ[buffer];

	for (; pathstr[buffer] != '\0'; buffer++)
	{
		if (pathstr[buffer] == ':')
			count++;
	}
	path = malloc(sizeof(char *) * count);
	if (path == NULL)
	{
		return (NULL);
	}
	token = *_str_tok(pathstr, "=");
	count--;
	for (buffer = 0; buffer < count; buffer++)
	{
		token = *_str_tok(NULL, ":");
		len = str_len(token);
		path[buffer] = malloc(sizeof(char) * (len + 1));
		if (path[buffer] == NULL)
		{
			return (NULL);
		}
		path[buffer] = token;
	}
	path[buffer] = NULL;
	return (path);
}
