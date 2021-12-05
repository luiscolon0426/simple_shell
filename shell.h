#ifndef SHELL_H
#define SHELL_H

extern char **environ;

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>

char *_user_input(void);
char **_str_tok(char *string);
int _executable(char **str_com);
int environment(void);
int _launch(char **args);


#endif /* SHELL_H */
