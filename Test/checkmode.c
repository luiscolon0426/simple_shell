#include "sh.h"


int main(int **av __attribute__((unused)))
{
	int int_mode = 1;
	int errcode = 0;

	errcode = errcode + 0;

	int_mode = isatty(STDIN_FILENO);
	if (int_mode == 0)
	{

	}
	else
	{

		interactive(av);
	}
	return (0);
}
