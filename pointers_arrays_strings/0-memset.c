#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: string
 * @b: char
 * @n: modify bites
 *
 * Return: @s modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
