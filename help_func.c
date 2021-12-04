#include "shell.h"

/**
 * _exit_func - when exiting the shell,
 * return 0
 *
 * Return: Always 0
 */
int _exit_func(void)
{
	return (0);
}

int _str_cmp(char *str1, char *str2)
{
	int idxa, idxb;
	char space = (' ');

	for (idxa = 0, idxb = 0; str1[idxa] != '\0' || str2[idxb] != '\0'; idxa++, idxb++)
	{
		while (str1[idxa] == space)
		{
			idxa++;
		}
		if (str1[idxa] != str2[idxb])
			return (0);
	}
	return (1);
}
