#include "main.h"
/**
 * *_strcat - función
 * @dest: resultado string.
 * @src: string.
 *
 * Return: @dest alterno.
 */
char *_strcat(char *dest, char *src)
{
	char *r = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;
	*dest++ = '\0';

	return (r);
}
