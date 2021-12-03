#ifndef SH_H
#define SH_H

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
int main(int ac __attribute__((unused)), char **av __attribute__((unused)));
int interactive();
void shell_loop(void);
int _putchar(char c);
void *_realloc(void *ptr, size_t size);
char **simple_shell_token(char *line);
int simple_shell_launch(char **args);
char prompt(void);
int entry_point()

#endif /* SH_H */
