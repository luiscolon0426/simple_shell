#include "shell.h"

/**
 * main - Entry point
 * Return: Success
 */
int main(void)
{
	char *string;
	char **str_com;
	int stat;

	do {
		write(1, "($HELL) ", 8);
		string = _user_input();
		str_com = _str_tok(string);
		stat = _executable(str_com);
		free(string);
		free(str_com);
	} while (stat);
	return (EXIT_SUCCESS);
}
