#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char filename[] = "/home/vagrant/repositories/simple_shell/Test/";
	char *path = realpath(filename, NULL);
	unsigned int i;
	struct stat st;

	if(path == NULL)
	{
		printf("cannot find file [%s]\n", filename);
	}
	else
	{
		printf("path[%s]\n", path);
		free(path);
	}


	if (ac < 2)
	{
		printf("Usage: %s _which filename ...\n", av[0]);
		return (1);
	}
	i = 1;
	while (av[i])
	{
		printf("%s:", av[i]);
		if (stat(av[i], &st) == 0)
		{
			printf(" FOUND\n");
		}
		else
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
}
