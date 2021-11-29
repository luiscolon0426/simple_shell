#include <stdio.h>

int main(int ac, char **av)
{
	int idx;
	for (idx = 0; idx < ac; idx++)
	{
	printf("av[%d]: %s\n", idx, av[idx]);
	}
}
