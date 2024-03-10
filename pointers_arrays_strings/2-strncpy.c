#include "main.h"
/**
 * *_strncpy - .
 * @dest:.
 * @src:.
 * @n:.
 *
 * Return: r.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *r = dest;

	while (*src != '\0' && n-- > 0)
		*dest++ = *src++;

	while (n-- > 0)
		*dest++ = '\0';

	return (r);
}
