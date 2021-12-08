#include "shell.h"

/**
 * main - Entry point
 *
 * Return: Success
 */
int main(void)
{
	char *string;
	char **str_com;
	int stat;

/*need to add environ, but idk where*/

	do {
		write(1, "(#cisfun$) ", 11);
		string = _user_input();
		str_com = _str_tok(string);
		stat = _executable(str_com);
		free(string);
		free(str_com);
	} while (1);
	return (EXIT_SUCCESS);
}
