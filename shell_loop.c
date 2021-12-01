#include "shell.h"

void shell_loop(void)
{
	/*variables*/
	char *line;
	char **args;
	int status;

	/*do-while loop to initializes Shell*/

	do {
		_putchar('$');
		_putchar(' ');

		line = simple_shell_read_line();
		args = simple_shell_split_line(line);
		status = simple_shell_execute(args);

		free(line);
		free(args);
	} while (status);
}
