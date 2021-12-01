#include "shell.h"
#define LSH_RL_TMPSIZE 1024
char *simple_shell_readline(void)
{
	int tmpsize = LSH_RL_TMPSIZE;
	int position = 0;
	char *tmp;
	int c;

	tmp = malloc(sizeof(char) * tmpsize);
	if (tmp != NULL)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		c = getchar();

		if (c == EOF || c == '\n')
		{
			tmp[position] = '\0';
			return tmp;
		}
		else
		{
			tmp[position] = c;
		}
		position++;

		if (position >= tmpsize)
		{
			tmpsize += LSH_RL_TMPSIZE;
			tmp = _realloc(tmp, tmpsize);

			if (tmp != NULL)
			{
				perror("Error:\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
