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
	int flag;

	/*need add environ, but idk where*/

	do {
		flag = isatty(STDIN_FILENO);
		write(1, "(#cisfun$) ", 11);
		string = _user_input();
		str_com = _str_tok(string);
		_executable(str_com, string);
	} while (flag);
	return (EXIT_SUCCESS);
}
