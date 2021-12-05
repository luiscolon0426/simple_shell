#include "shell.h"

/**
 * _str_tok - splits the string into tokens
 * @line: string to be splitted
 * Return: pointer to the divided string
 */
char **_str_tok(char *string)
{
    int bufsize = 64, position = 0;
    char *token;
    char **tokens;

    tokens = malloc(bufsize * sizeof(char *));
    if (!tokens)
    {
        printf("Error\n");
        free(tokens);
        exit(EXIT_FAILURE);
    }
    token = strtok(string, " ");
    while (token != NULL)
    {
        tokens[position] = token;
        position++;

        /* if need more memory space, then add*/
        if (position >= bufsize)
        {
            bufsize += 64;
            tokens = realloc(tokens, bufsize * sizeof(char *));

            if (!tokens)
            {
                printf("Error\n");
                exit(EXIT_FAILURE);
            }
        }
        token = strtok(NULL, " ");
    }
    tokens[position] = NULL;
    return (tokens);
}
