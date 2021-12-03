#include "sh.h"


int _interactive(char **av __attribute__((unused)))
{
	/*@av: argument from main*/

	int (*func_ptr)() = NULL;
	char *tmp = NULL;
	char **env_args = NULL;
	char *complete_comm = NULL;
	char **usr_comm = NULL;
	size_t tmpsize;



	while (1)
	{
		write(STDOUT_FILENO, "($) ", 4);
		getline(&tmp, &tmpsize, stdin);
		validategetline(tmp, 0, usr_comm, env_args);

		if (tmp[0] == 10 || tmp[0] == 9)
			continue;
		usr_comm = args_constructor(tmp);

		if (usr_comm == NULL)
			continue;

		func_ptr = find_builtins(*usr_comm);

		if (func_ptr)
		{
			if (func_ptr == exit_func)
				free_all(usr_comm, env_)
		}
	}
}

