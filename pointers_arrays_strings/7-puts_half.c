#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by a new line.😴
 *
 *@str: String
 *
 *Return: Half string
 */
void puts_half(char *str)
{
	int l = 0, i, n;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		n = 1 / 2;
	}
	else
	{
	n = (l - 1) / 2;
	n += 1;
	}
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

