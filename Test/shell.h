#ifndef SHELL_H
#define SHELL_H

/* LIBRARIES */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>


/* PROTOTYPES */
int main (int argc, char **argv, char **env);
unsigned int _strlen(char *s);

#endif /* SHELL_H */