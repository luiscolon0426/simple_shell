#include "shell.h"

/**
 * main - executes commands based on user input
 * @ac: unused
 * @av: unused
 * @env: enviroment
 * Return: 0 on success.
 */

int main(int ac, char **av __attribute__((unused)), char **env)
{
	int flag = 0;
	char *input;
	char **user_input = NULL;
	char **path = path_to_arr(env);
	(void) ac;

	do {
		flag = attycheck(flag);
		input = userinput();
		if (input == NULL)
			continue;
		if (_strcmp(input, "exit") == 1)
		{
			safe_free(&input);
			memclean(path);
			exit(0);
		}
		else if (_strcmp(input, "env") == 1)
		{
			envprinter(env, path);
			safe_free(&input);
		}
		else
		{
			user_input = split_string(input);
			input_validator(user_input, path);
			safe_free(&input);
			memclean(user_input);
		}
		if (flag == 0)
			memclean(path);
	} while (flag);
	return (0);
}
/**
 * attycheck - checks for interactive and non-interactive mode.
 * @flag: turns off flag.
 * Return: wether flag turns on or off.
 */
int attycheck(int flag)
{
	if (!isatty(STDIN_FILENO))
	{
		flag = 0;
	}
	else
	{
		flag = 1;
		_putchar('$');
		_putchar(' ');
	}

	return (flag);
}
