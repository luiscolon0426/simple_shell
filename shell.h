#ifndef SHELL_H
#define SHELL_H


extern char **environ;


/* PROTOTYPES */
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



/**
 * struct builtins - allows user to provide
 * alternative names for the primitive user
 * defined
 * @str1: string One
 * @str2: string 2
 **/
typedef struct builtins
{
char *str1;
char *str2;
} builtin;



/* PROTOTYPES */

char *_user_input(void);
char **_str_tok(char *string);
int _executable(char *str);
int environment(void);
void _launch(char **args, char *string);
int str_len(char *str);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _builtin_function(char **args);
int _putchar(char c);
void _puts(char *str);
int _strncmp(const char *s1, const char *s2, size_t n);

void free_grid(char **args);


#endif /* SHELL_H */
