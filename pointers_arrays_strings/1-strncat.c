#include "main.h"
/**
 * *_strncat - concatena dos strings.
 * @dest: string destino.
 * @src: string.
 * @n: numero de caracteres en srt a copiar.
 *
 * Return: r
 */
char *_strncat(char *dest, char *src, int n)
{
	char *r = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n-- > 0)
		*dest++ = *src++;

	*dest++ = '\0';

	return (r);
}
