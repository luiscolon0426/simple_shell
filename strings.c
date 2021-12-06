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
