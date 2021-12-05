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

    /*will stdout environment*/    
    else if (strcmp(str_com[0], "printenv") == 0)
    {
        /*function to get environment*/
        environment();
        return(1);
    }

    /*exit program if "exit" is inputed*/
    else if (strcmp(str_com[0], "exit") == 0)
        exit(EXIT_SUCCESS);

    /*if it doesn't recognize command*/
    else if (stat(*str_com, &st) == -1)
    {
        perror("execute");
        return (1);
    }
    return (_launch(str_com));
}
