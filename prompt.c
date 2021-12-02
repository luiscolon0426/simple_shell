#include "sh.h"

int main(void)
{
	char *string;
	size_t n = 50;
	
	/**
	 * the condition for this while is always true
	 * because 1 is always true 
	 */

	while (1)
	{
		string = malloc(sizeof(char) * n);

		write(STDOUT_FILENO, "$ ", 4);
		getline(&string, &n, stdin);
	}
}


