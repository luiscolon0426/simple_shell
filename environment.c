#include "shell.h"

/**
 * enviornment - Checks for the enviornment
 * in the shell
 * Return: 0
 **/

int environment(void)
{
  int count = 0;

  while(environ[count] != NULL)
  {
    printf("%s\n", environ[count]);
    count++;
  }

  return (0);
}
