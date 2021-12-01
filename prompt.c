#include "sh.h"

int main()
{
    char *string;
    size_t n = 50;
/*the condition for this while is always true
 * because 1 is always true */
    while (1)
    {

        string = malloc(sizeof(char) * n);

        printf("$ ");
        getline(&string, &n, stdin);
        printf("%s", string);
    }
}

