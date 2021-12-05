#include "shell.h"
/**
 * envprinter - prints all elements of the enviorement
 * @env: the enviorement passed.
 */

void envprinter(char **env)
{
	int idx, idx2;

	for (idx = 0; env[idx] != NULL; idx++)
	{
		for (idx2 = 0; env[idx][idx2] != '\0'; idx2++)
		{
			_putchar(env[idx][idx2]);
		}
		_putchar('\n');
	}
}
