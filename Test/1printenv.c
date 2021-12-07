#include "sh.h"

extern char **environ;

/**
 * main - prints enviorment
 *
 * Return: 0
 */

int main(void)
{
	unsigned int i;

	for(i = 0; environ[i] != NULL; i++)
	{
		_putchar(environ[i]);
	}
	return (0);
}
