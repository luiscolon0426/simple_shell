#include <stdio.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main()
		{

		/* In a never ending loop */
		while (1) {

		/* Output our prompt */
		fputs("$ ", stdout);

		/* Read a line of user input of maximum size 2048 */
		fgets(input, 2048, stdin);

		/* Echo input back to user */
		printf("%s", input);
		}

		return 0;
		}
