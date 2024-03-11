#include "main.h"
/**
 * *_strstr - finds the first occurrence of the substring
 *needle in the string haystack.
 * @haystack: string.
 * @needle: frase to find
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *n = needle, *pos;

	while (*haystack)
	{
		pos = haystack;

		while (*haystack != '\0' && *needle != '\0')
		{

			if (*haystack != *needle)
			{
				needle = n;
				break;
			}
			haystack++;
			needle++;
		}
		if (*haystack != '\0' && *needle == '\0')
			return (pos);

	haystack++;
	}
	return (0);
}
