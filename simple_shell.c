#include "shell.h"

/**
 * main - beggining of shell
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char *string;
	char **str_com;
	int stat;
	do {
		write(1,"($) ", 4);
		string = _user_input();
	printf("Holaaa\n");
		str_com = _str_tok(string);
		stat = _executable(str_com);
		free(string);
		free(str_com);
	} while (stat);
	return (EXIT_SUCCESS);
}
