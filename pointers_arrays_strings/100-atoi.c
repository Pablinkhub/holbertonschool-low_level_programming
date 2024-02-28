#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 *
 *@s: Ayuda
 *
 *Return: aaa
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	for (; *s; s++)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		if (*s >= '0' && *s <= '9')
		{
			if (!started)
				started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
	}
	result *= sign;

	return (result);
}

