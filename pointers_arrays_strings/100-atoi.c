#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: ea
 *
 *Return: Nose
 *
 */
int _atoi(char *s)
{
	int r = 0;
	int f = 1;

	for (; *s; s++)
	{
		if (*s == '-')
		{
			f *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			r = r * 10 + (*s - '0');
		}
		if (*(s + 1) < '0' || *(s + 1) > '9')
		{
			break;
		}
	}
	return (r * f);
}

