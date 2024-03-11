#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string.
 * @c: char
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
