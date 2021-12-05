#include "shell.h"
/**
 * path_to_arr - saves path in a 2d array
 * @env: the enviorement.
 * Return: the PATH in a 2d arr.
 */
char **path_to_arr(char **env)
{
	int i, count = 2, len;
	char *pathstr = NULL, *token = NULL;
	char **path = NULL;

	for (i = 0; env[i] != NULL; i++)
	{
		if (_strncmp(env[i], "PATH", 4) == 0)
			break;
	}
	pathstr = env[i];

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
	token = strtok(pathstr, "=");
	count--;
	for (i = 0; i < count; i++)
	{
		token = strtok(NULL, ":");
		len = _strlen(token);
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
