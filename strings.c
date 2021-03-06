#include "shell.h"
/**
 * str_len - Returns the length of a string.
 * @str: string to get the length of.
 * Return: length off string
 */
int str_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 *  *_strcpy - copies the string pointed to by
 *  src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 *  @dest: pointer to the buffer in wich we copy the string
 *  @src: string to be copied
 *
 *  Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i - 1] = '\0';

	return (dest);
}
/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _puts - Print a string,
 * followed by a new line
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar (*str++);

	_putchar('\n');
}

/**
 * _strncmp - compares two string.
 * @s1: first string.
 * @s2: second string we are comparing.
 * @n: the number of bytes it will compare.
 *
 * Return: 0 if the strings are the same.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	for (index = 0; index < n && (s1[index] ==
				s2[index]) && s1[index] != '\0'; index++, n--)
		;
	return (s1[index] - s2[index]);
}
