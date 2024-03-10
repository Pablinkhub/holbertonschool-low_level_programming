
#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: coppy memory
 * @src: memory coppy
 * @n: bytes to copy.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
