#include "shell.h"
/**
 * _strcmp - compares two string.
 * @s1: first string.
 * @s2: second string we are comparing.
 * @n: the number of bytes it will compare.
 *
 * Return: 0 if the strings are the same.
 * returns the difference between string one
 * and string two otherwise.
 * if string 1 is larger, the return value is positive.
 * if string 2 is larger, the return value is negative.
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	int index;

	for (index = 0; index < n && (s1[index] == s2[index]) && s1[index] != '\0'; index++, n--);
	return (s1[index] - s2[index]);
}
