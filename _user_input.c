#include "shell.h"

/**
 * _user_input - gets input from the user
 * Return: string with the input
 */
char *_user_input(void)
{
    int tmpsize = 100;
    int dest = 0;
    char *tmp;
    int idx;

    tmp = malloc(sizeof(char) * tmpsize);
	
    if (tmp != NULL)
    {
        free(tmp);
        exit(EXIT_FAILURE);
    }
    while (1)
    {
        /*reading each character*/
        idx = getchar();

        if (idx == '\n')
        {
            tmp[dest] = '\0';
            return (tmp);
        }

        /*cntrl-d exit*/
        else if (idx == EOF)
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }
        else
            tmp[dest] = idx;
        dest++;

        /*if need more memory space, then add*/
        if (dest >= tmpsize)
        {
            tmpsize += 100;
            tmp = realloc(tmp, tmpsize);
            if (tmp != NULL)
            {
                free(tmp);
                exit(EXIT_FAILURE);
            }
        }
    }
}
