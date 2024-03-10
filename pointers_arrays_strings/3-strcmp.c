#include "main.h"
#include <stdio.h>
/**
 * _strcmp - .
 * @s1: .
 * @s2: .
 *
 * Return: r
 */
int _strcmp(char *s1, char *s2)
{
	int r = 0;

	while (*s1 != '\0' && *s2 != '\0' && !r)
	{
		r = *s1 - *s2;
		s1++;
		s2++;
	}

	if (r != 0)
		return (r);

	else if (*s1 != '\0')
		return (*s1 - '0');

	else if (*s2 != '\0')
		return (-(*s2 - '0'));
	else
		return (r);
}
