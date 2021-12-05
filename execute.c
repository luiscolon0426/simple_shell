#include "shell.h"

/**
 * _execute - checks for errors before launching the command
 * @args: string with commands
 * Return: 1 if launch was success
 */
int _executable(char **str_com)
{
    struct stat st;

    if (str_com[0] == NULL)
        return (1);

    else if (strcmp(str_com[0], "printenv") == 0)
    {
        environment();
        return(1);
    }

    else if (strcmp(str_com[0], "exit") == 0)
        exit(EXIT_SUCCESS);
    return (_builtin_function(str_com));
}
